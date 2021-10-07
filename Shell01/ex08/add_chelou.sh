#!/bin/sh

base1="'\\\"?!"
base2="mrdoc"

trN1=$(echo "$FT_NBR1" | sed -e "y/$base1/01234/" )
trN2=$(echo "$FT_NBR2" | sed -e "y/$base2/01234/" )

bases="ibase=5;obase=D"

echo "$bases;$trN1 + $trN2" | bc | sed -e "y/0123456789ABC/gtaio luSnemf/"
