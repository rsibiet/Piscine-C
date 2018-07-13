ldapsearch 'uid=z*' cn | sed -n '/cn:/p' | sed 's/cn: //g' | sort -f -r
