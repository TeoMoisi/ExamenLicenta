#!/bin/bash
ps -ef | \
grep -v "^root " | \ tail -n +2 | \
awk '{print $1, $2}' | \ while read U P; do
echo $U $P
if grep "^$U:" /etc/passwd | cut -d: -f6 | grep -q "/scs/"; then
A=`ps -o etime $P | tail -n 1 | awk -F: '{print ($1*60+$2)}'` if [ $A -ge $1 ]; then
            echo "Should kill $U $P $A"
        fi
fi done
