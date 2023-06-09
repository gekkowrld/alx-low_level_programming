#!/bin/bash

for c_file in *.c; do
	gcc -std=gnu89 -Wall -Werror -c $c_file
done

for o_file in *.o; do
	ar rc liball.a $o_file
done
