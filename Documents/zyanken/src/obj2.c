#include "../include/obj1.h"

int nyuryoku(shouhai *in)
{
  FILE *fp;
  char *fname = "sub.csv";

  fp = fopen (fname, "r");
  if(fp == NULL){
    printf("失敗\n");
    return -1;
  }
  
  if(fscanf(fp,"%d,%d,%d,%d", &in->battle, &in->win, &in->lose, &in->draw)==0)
	{
	  perror("scanf failed");
	}
  fclose(fp);
  //printf("%d,%d,%d,%d\n",s0,s1,s2,s3);
  return 0;
}


int shutsuryoku(shouhai in,shouhai create)
{
  int a0,a1,a2,a3;
  FILE *fp;
  char *fname = "sub.csv";

  fp = fopen (fname, "w");
  if(fp == NULL){
    printf("失敗\n");
    return -1;
  }
  
  a0 = in.battle + create.battle;
  a1 = in.win    + create.win;
  a2 = in.lose   + create.lose;
  a3 = in.draw   + create.draw;
  fprintf(fp, "%d,%d,%d,%d\n", a0, a1, a2, a3);
  fclose(fp);
  return 0;
}
