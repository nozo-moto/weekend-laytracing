From ubuntu:latest
RUN apt-get update && \
    apt-get install -y build-essential cmake clang libssl-dev vim
