#!/bin/bash

if [ ! "$(whoami)" "==" "root" ]; then
	echo "This script must be run as root."
	exit 1
fi

apt-get install -y openssh-server || exit 1

sed 's/^Port 22$/Port 4242/' /etc/ssh/sshd_config > /etc/ssh/sshd_config~
mv /etc/ssh/sshd_config{~,}

/etc/init.d/ssh restart

echo -e "\e[92mFinished!\e[0m"

