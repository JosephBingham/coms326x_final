#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
  char *tape;
  int len;
} TAPE_T;
/*
  init:
  initializes values for the tape time
  Params:
  TAPE_T *t, a pointer to the tape name that is to be initialized
  Return:
  void
 */
void init(TAPE_T *t){
  t->len = 10000;
  t->tape = (char *)calloc(t->len, sizeof(char));
}

/*
  resize:
  resizes the tape as needed to the desired size
  Params:
  TAPE_T *t, a pointer to the tape that needs to be resized
  int size, the size that it is to be changed to.
  Return:
  int = 0 if failure, 1 otherwise
 */


int resize(TAPE_T *t, int size){
  if(t == NULL || t->tape == NULL){
    return 0;
  }
  char *temp = (char *)calloc(size, sizeof(char));
  t->len = size;
  strcpy(temp, t->tape);
  free(t->tape);
  t->tape = temp;
  if(t->tape == NULL){
    return 0;
  }
  return 1;
}
