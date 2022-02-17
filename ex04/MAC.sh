#!/bin/sh
ifconfig | grep 'ether ' | awk '{print $2}'
#grep finds lines including ether followed by a space
#awk prints following string
