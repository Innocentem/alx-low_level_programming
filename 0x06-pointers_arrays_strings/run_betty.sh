#!/bin/bash

cd /alx-low_level_programming/0x06-pointers_arrays_strings
for file in *.c;
	do
    	# Run Betty commands on each file
    	betty-style "$file"
    	betty-doc "$file"

done
