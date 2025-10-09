#!/bin/bash

read -p "Enter your full name (Firstname Lastname): " fullname
echo $fullname > NAME

name=$(echo "$fullname" | tr '[:upper:]' '[:lower:]' | tr ' ' '_')

datetime=$(date +"%Y-%m-%d_%H_%M")

filename="${datetime}-${name}.tar.gz"

tar -czf "$filename" ./gtest ./inc ./src ./tests CMakeLists.txt

echo "Package created: $filename"
echo "Please now upload this file to Moodle!"
