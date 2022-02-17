#!/bin/sh
#This will find all the .sh files, display them and erase the ending.
find . -type f -name "*.sh" | awk '{ print substr( $0, 1, length($0)-3 ) }' | sed 's#.*/##'

#awk deletes the last 3 symbols
#sed deletes the path from directories
