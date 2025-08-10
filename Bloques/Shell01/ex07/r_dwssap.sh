cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | cut -d ':' -f 1 | rev | sort -r | sed -n '7,15 p' | tr '\n' ' ' | sed 's/ /, /g' | sed 's/, $/./' | tr -d '\n'
