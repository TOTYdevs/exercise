/*
  ex_2_takino.c
  Made by Takino  */

#include<stdio.h>

int main(){

  int num;
  int flag = 0;

  printf("最大いくつまでの素数判定を行いますか？＞");
  scanf("%d", &num);

  for(int i=2; i<num ;i++){
    for(int j=2; j<i; j++){
      if(i%j == 0) flag += 1;
    }
    if(flag==0) printf("%d ", i);
    flag = 0;
  }

  return 0;

}
