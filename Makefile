make: final.c
	gcc final.c -o final -O3;
git:
	git add *
	git commit -m "working"
	git push origin master
clean:
	rm final
