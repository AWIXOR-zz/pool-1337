#!/bin/sh
cat /etc/passwd |
grep -v '^#' |
awk "NR%2==0{print}" |
cut -d ':' -f 1 |
rev | sort -r |
awk 'NR>= ENVIRON["FT_LINE1"] && NR<= ENVIRON["FT_LINE2"]' |
paste -s -d ',' - |
sed -e 's/,/, /g' |
tr -d '\n' ; echo '.' | tr -d '\n' 
