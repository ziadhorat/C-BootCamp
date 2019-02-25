ifconfig | grep "ether [a-g/0-9]" | sed "s/"ether"//g" | sed "s/ //g"
