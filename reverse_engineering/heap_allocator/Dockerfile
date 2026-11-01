FROM ubuntu:latest
RUN apt-get update && apt-get install -y --no-install-recommends \
    gdb \
    libc6 \
    libstdc++6 \
    && rm -rf /var/lib/apt/lists/*
WORKDIR /workspace
CMD ["gdb"]