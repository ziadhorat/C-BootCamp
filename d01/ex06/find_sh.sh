find . -name "*.sh" -type f -exec basename {} \; | cut -f -1 -d '.' 
