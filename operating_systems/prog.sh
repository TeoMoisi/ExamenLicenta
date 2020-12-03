for F in *.txt; do K=`grep abc $F`
if [ “$K” != “” ]; then echo $F
fi done
