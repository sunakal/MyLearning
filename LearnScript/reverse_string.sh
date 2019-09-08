#! /bin/bash
input="$1"
result=""
len=${#input}
for((i=$len-1;i>=0;i--))
do
	reverse="$reverse${input:$i:1}"
	echo"$i: $reverse:${input:$i:2}"
done

echo "$reverse"
