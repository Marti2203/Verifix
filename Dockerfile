FROM ubuntu:18.04

RUN apt clean
RUN apt update
#add this for installing latest version of python3.8
#RUN add-apt-repository ppa:deadsnakes/ppa
#RUN apt update

# install other libraries
RUN DEBIAN_FRONTEND=noninteractive apt install -y git vim python3-pip gdb python3-dev python-dev clang

# build the project
COPY . /Verifix

RUN pip3 install --upgrade pip

RUN pip3 install -r /Verifix/requirements.txt

ENTRYPOINT /bin/bash
