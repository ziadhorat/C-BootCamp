cat /etc/passwd | grep -v "#" |  sed '1!n;d' | sed -e  's/:.*//' | rev |sort -r  
