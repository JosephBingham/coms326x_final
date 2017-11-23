#include<stdio.h>
#include<stdlib.h>
#include"tape.h"

int ind = 0;
FILE *file;
char *rTape;
TAPE_T *pwTape;
TAPE_T *nwTape;

/*
initFile:
opens the file, steps through the file and counts how many characters there 
as well as checks to make sure all of the loops are legal
Param:
char *name = name of the file that is being interpreted 
Return:
int = the size of the file that is being interpreted
*/
int initFile(char *name){
  int size = 0;
  int loop = 0;
  if((file = fopen(name, "r"))){ 
    char ch;
    while((ch = getc(file)) != EOF && (loop == 0 || loop == 1)){
      if(ch == '['){
	loop++;
      }
      if(ch ==']'){
	loop--;
      }
      size++;
    }
  }
  if(!(loop == 0)){
    printf("Syntax error: mismatched loop\n");
    return -1;
  }
  return size;
} /* initFile */

/*
  interpret:
  steps though input buffer and applies the proper logic to each character
  Param:
  TAPE_T *t, pointer to a tape type that is being read in. 
  Return:
  int = 1 if successful interpretation. 0 else. 
*/
int interpret(char *t){
  printf("success\n");
  return 0;
} /* interpret */

/*
  main method
*/

int main(int argc, char *argv[] ){
  char *name = argv[1];
  int rTapeSize = 0;
  if((rTapeSize = initFile(name)) == 0){
    printf("something went wrong with getting the file\n");
    return 1;
  }
  else if(rTapeSize > 0){
    rTape = (char *)calloc(rTapeSize, sizeof(char));
    char ch;
    int i = 0;
    while((ch = getc(file)) != EOF){
      rTape[i] = ch;
      i++;
    }
    interpret(rTape);
    return 0;
  }

}
