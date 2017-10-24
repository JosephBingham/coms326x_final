#include<stdio.h>
#include<stdlib.h>
//#include<assert.h>
#ifndef SIZE
#define SIZE 10000
#endif

int ind = 0;
FILE *file;
char *tape;
int getFile(char *name){
	if(file = fopen(name, "r")){
		return 1;
	} else {
		return 0;
	}
}
int interpret(char ch){
	switch(ch){
		case '+': tape[ind] += 1; break;
		case '-': tape[ind] -= 1; break;
		case '>': if (ind < SIZE) ind += 1; break;
		case '<': if(ind >= 0) ind -= 1; break;
		case '.': printf("%c\n", tape[ind]); break;
		case ',': printf("please enter char: "); scanf("%c", tape[ind]); break;
		case '[': //begin loop logic
//			while(tape[ind]){
//				while((ch = getc(file)) != ']'){
//					i++;
//					interpret(
//				}
//			}
			break;
		default: break;
	}
	return 0;
}

int main(int argc, char *argv[] ){
	char *tape = (char *)calloc(SIZE, sizeof(char));

	char *name = argv[1];

	if(getFile(name)){
		char ch;
		while((ch = getc(file)) != EOF){
			interpret(ch);
		}
	} else {
	printf("something went wrong with getting the file\n");
	}
}
