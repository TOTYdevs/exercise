/*
  ex_1_takino.c
  Made by Takino */


#include<stdio.h>

int main(){

  int num;
  int i=0;

  printf("何回表示しますか？＞");

  scanf("%d", &num);

  while(i<num){
    printf("Hey girl %d\n", i+1);
    i+=1;
  }

  return 0;

}
