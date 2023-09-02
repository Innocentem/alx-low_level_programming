#!/bin/bash
#
for file in *.c; do

    if [ -f "$file" ]; then
        filename_no_ext="${file%.c}"
        
        gcc -o "$filename_no_ext" "$file"
        
        if [ $? -eq 0 ]; then
            echo "Compiled $file successfully."
        else
            echo "Error compiling $file."
        fi
    fi
done
