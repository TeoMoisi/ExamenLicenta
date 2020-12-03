for F in *.c ; do
	if [ -f $F ]; then
		grep "#include.*<" $F | sed "s/^.*<\(.*\)>.*$/\1/"
	fi
done | sort
