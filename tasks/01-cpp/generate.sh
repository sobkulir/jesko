for file in source/*; do
	filename=$(basename "$file")
	echo GENERATING $filename
	rm -r $filename
	./generate_task.sh $file $filename
	echo ""
done
	