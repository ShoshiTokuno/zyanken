#ifndef __OBJ1__
#define __OBJ1__

#include <time.h>
#include <stdio.h>
#include <stdlib.h>



typedef struct{
  int battle;
  int win;
  int lose;
  int draw;
} shouhai;


int nyuryoku(shouhai *in);
int shutsuryoku(shouhai in,shouhai create);
void zyanken(shouhai *create);


#endif
