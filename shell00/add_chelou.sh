
#!/bin/sh

N1=$(echo "$FT_NBR1" | tr "'\"\\?!" "01234")
N2=$(echo "$FT_NBR2" | tr "mrdoc" "01234")

SUM=$(echo "obase=13; ibase=5; $N1 + $N2" | bc)

echo "$SUM" | tr '0123456789ABC' 'gtaio luSnemf'
