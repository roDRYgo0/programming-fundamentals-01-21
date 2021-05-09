FROM gcc:4.9
WORKDIR /usr/src/
COPY . .

RUN apt-get update
RUN apt-get install -y zsh
RUN wget https://github.com/robbyrussell/oh-my-zsh/raw/master/tools/install.sh -O - | zsh || true

RUN echo 'grun() { \n\
    g++ $1 -o executable \n\
    if [[ $? = 0 ]]; then \n\
        ./executable \n\
    fi \n\
}' >> ~/.zshrc
