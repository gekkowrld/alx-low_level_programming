#/bin/bash

for c_file in *.c; do
	gcc -c $c_file
	ar rc liball.a ${c_file%.*}.o
done
