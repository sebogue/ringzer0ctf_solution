// runner.cpp
#include <cstdio>
#include <cstdlib>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
    const char *fn = "shellcode.bin";
    int fd = open(fn, O_RDONLY);
    if(fd < 0){ perror("open"); return 1; }
    struct stat st;
    if(fstat(fd, &st) < 0){ perror("stat"); return 1; }
    size_t len = st.st_size;
    if(dup2(1,0) < 0){ /* non fatal */ }
    void *mem = mmap(NULL, len, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
    if(mem == MAP_FAILED){ perror("mmap"); return 1; }
    ssize_t r = read(fd, mem, len);
    if(r != (ssize_t)len){ perror("read"); return 1; }
    close(fd);
    if(mprotect(mem, len, PROT_READ|PROT_EXEC) != 0){ perror("mprotect"); return 1; }
    ((void(*)(void))mem)();
    return 0;
}
