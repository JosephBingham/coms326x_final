make: final.c tape.h
	gcc -g final.c -o final -O3 -std=c11
git:
	git add *
	git commit -m "working"
	git push origin master

clean:
	rm final *~
