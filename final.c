#include<stdio.h>
#include<stdlib.h>
FILE *file;
int getFile(char *name){
	if(file = fopen(name, "r")){
		return 1;
	} else {
		return 0;
	}
}
int interpret(){
	printf("test\n");
	return 0;
}
int main(int argc, char *argv[] ){
	char *name = argv[1];
	if(getFile(name)){
		interpret(file);
	} else {
	printf("something went wrong with getting the file\n");
	}
}
