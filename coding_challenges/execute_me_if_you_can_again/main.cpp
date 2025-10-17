// main.cpp
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <sys/mman.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <cctype>
#include <iomanip>
#include <vector>

std::string fetchURL(const std::string& url) {
    std::string command = "curl -s \"" + url + "\"";
    FILE* pipe = popen(command.c_str(), "r");
    if (!pipe) {
        std::cerr << "Error with popen" << std::endl;
        return "ERROR";
    }
    char buffer[128];
    std::string result = "";
    while (fgets(buffer, sizeof(buffer), pipe) != NULL) {
        result += buffer;
    }
    pclose(pipe);
    return result;
}

std::string extractShellcode(const std::string& html) {
    std::size_t div_start = html.find("class=\"message\"");
    if (div_start == std::string::npos) {
        std::cerr << "No message div found" << std::endl;
        return "";
    }
    std::size_t begin_marker = html.find("----- BEGIN SHELLCODE -----", div_start);
    if (begin_marker == std::string::npos) {
        std::cerr << "No BEGIN marker found" << std::endl;
        return "";
    }
    std::size_t end_marker = html.find("----- END SHELLCODE -----", begin_marker);
    if (end_marker == std::string::npos) {
        std::cerr << "No END marker found" << std::endl;
        return "";
    }
    std::size_t shellcode_start = begin_marker + 33;
    std::size_t shellcode_length = end_marker - shellcode_start;
    std::string raw_shellcode = html.substr(shellcode_start, shellcode_length);

    std::string cleaned;
    for (size_t i = 0; i < raw_shellcode.length(); ) {
        if (raw_shellcode.substr(i, 6) == "<br />") { i += 6; continue; }
        if (raw_shellcode.substr(i, 5) == "<br/>")  { i += 5; continue; }
        if (raw_shellcode.substr(i, 4) == "<br>")   { i += 4; continue; }
        if (raw_shellcode[i] == ' ' || raw_shellcode[i] == '\n' || raw_shellcode[i] == '\r' || raw_shellcode[i] == '\t') { i++; continue; }
        cleaned += raw_shellcode[i];
        i++;
    }
    return cleaned;
}

void writeShellcodeToFile(const std::string& shellcode_str, const std::string& filename) {
    std::vector<std::string> toks;
    for (size_t i = 0; i + 3 < shellcode_str.size(); ) {
        if (shellcode_str[i] == '\\' && shellcode_str[i+1] == 'x') {
            toks.push_back(shellcode_str.substr(i, 4));
            i += 4;
        } else {
            ++i;
        }
    }

    if (toks.size() > 0x01) toks[0x01] = "\\x50";
    if (toks.size() > 0x53) toks[0x53] = "\\xab";

    std::string patched_str;
    patched_str.reserve(toks.size() * 4);
    for (auto &t : toks) patched_str += t;

    std::vector<uint8_t> buf;
    for (size_t i = 0; i + 3 < patched_str.length(); ) {
        if (patched_str[i] == '\\' && patched_str[i+1] == 'x') {
            std::string byte_str = patched_str.substr(i+2, 2);
            try {
                uint8_t byte = static_cast<uint8_t>(std::stoi(byte_str, nullptr, 16));
                buf.push_back(byte);
                i += 4;
            } catch (...) {
                ++i;
            }
        } else {
            ++i;
        }
    }
    std::ofstream file(filename, std::ios::binary);
    if (!file) {
        std::cerr << "ERROR: Cannot open file for writing" << std::endl;
        return;
    }
    if (!buf.empty()) file.write(reinterpret_cast<const char*>(buf.data()), buf.size());
    file.close();
    std::cout << "Written " << buf.size() << " bytes" << std::endl;
}


void sendResponse(const std::string& url, const std::string& response) {
    std::string encoded;
    for (char c : response) {
        if (isalnum(c) || c == '-' || c == '_' || c == '.' || c == '~') {
            encoded += c;
        } else {
            char buf[4];
            snprintf(buf, sizeof(buf), "%%%02X", (unsigned char)c);
            encoded += buf;
        }
    }
    std::string command = "curl -s \"" + url + "?r=" + encoded + "\"";
    system(command.c_str());
}

std::string run_runner_and_capture() {
    const char *cmd = "/usr/local/bin/runner";
    std::string output;
    FILE *p = popen(cmd, "r");
    if (!p) {
        std::cerr << "popen failed\n";
        return "";
    }
    char buf[256];
    while (fgets(buf, sizeof(buf), p) != nullptr) {
        output += buf;
    }
    int rc = pclose(p);
    (void)rc;
    return output;
}

int main() {
    const std::string url = "http://challenges.ringzer0ctf.com:10125/";
    const std::string shellcode_file = "shellcode.bin";

    std::cout << "=== Starting ===" << std::endl;

    std::string html = fetchURL(url);
    if (html.empty() || html == "ERROR") {
        std::cerr << "Fetch failed" << std::endl;
        return 1;
    }

    std::string shellcode_str = extractShellcode(html);
    if (shellcode_str.empty()) {
        std::cerr << "Extraction failed" << std::endl;
        return 1;
    }

    writeShellcodeToFile(shellcode_str, shellcode_file);

    // rendre le fichier lisible/exécutable au besoin
    chmod(shellcode_file.c_str(), 0755);

    // Lancer runner et capturer sa sortie (runner lit shellcode.bin)
    std::string output = run_runner_and_capture();
    std::cout << output << std::endl;
    sendResponse(url, output);

    // cleanup sur le volume
    remove(shellcode_file.c_str());
    return 0;
}
