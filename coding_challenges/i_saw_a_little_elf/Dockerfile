# Dockerfile
FROM ubuntu:22.04

# Installer Python et dépendances minimales
RUN apt-get update && \
    apt-get install -y python3 python3-pip && \
    pip3 install requests && \
    rm -rf /var/lib/apt/lists/*

# Copier le serveur dans l'image
COPY i_saw_a_little_elf.py /i_saw_a_little_elf.py

CMD ["python3", "/i_saw_a_little_elf.py"]