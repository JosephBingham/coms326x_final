#include<stdio.h>
#include<stdlib.h>

#ifndef SIZE
#define SIZE 10000
#endif

int index = 0;
FILE *file;
char *tape = (char *)calloc(SIZE*sizeof(char));

int getFile(char *name){
	if(file = fopen(name, "r")){
		return 1;
	} else {
		return 0;
	}
}
int interpret(char ch){
	switch(ch){
		case '+': tape[index] += 1; break;
		case '-': tape[index] -= 1; break;
		case '>': index += 1; assert(index < SIZE); break;
		case '<': index -= 1; assert(index >= 0); break;
		case '.': printf("%c\n", tape[index]); break;
		case ',': scanf("%c", &tape[index]); break;
		case '[': //begin loop logic
			while(tape[index]){
				
				while((ch = getc(file)) != ']'){
					i++;
					interpret(
				}
			}
			break;
	}
}

int main(int argc, char *argv[] ){
	char *name = argv[1];
	if(getFile(name)){
		interpret(file);
	} else {
	printf("something went wrong with getting the file\n");
	}
}
