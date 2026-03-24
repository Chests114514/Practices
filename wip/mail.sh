#!/bin/bash

# TO DO: Bug at mailSend variable-swaks
#        Information:
#      		    *** TLS not avaliable: requires NET::SSLeay.  Exiting
# 	 Direction:
#                   Try to install pack "NET::SSLeay" and retry.

mailSend() {
	swaks \
		--to $mailTarget \
		--from ngahhhhhhhh@hotmail.com \
		--server smtp-mail.outlook.com \
		--port 587 \
		--auth LOGIN \
		--auth-user ngahhhhhhhh@hotmail.com\
		--auth-password Chests114514 \
		-tls
	if [ "$?" = "0" ]; then
		echo -e "\e[0;33m[#] Mail Send Successfully\e[0m"
		else
			echo -e "\e[0;31m[!] Mail Send Error (Code:$?)\e[0m"
	fi
}

mailAsks() {
	echo -e "\e[0;32m===========Mail===========\e[0m"
	echo "Welcome to Mail!"
	read -p "Send to:" mailTarget
	if [ "$mailTarget" = "" ]; then
		echo -e "\e[0;31m[!] Mail Target cannot be empty\e[0m"
		exit 1
		elif [ "$mailTarget" = "cancel" ]; then
			echo -e "\e[0;33m[#] Cancelled.\e[0m"
		else
			mailSend
	fi
}

mailAsks
