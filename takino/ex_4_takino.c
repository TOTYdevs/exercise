/*
  ex_4_takino.c
  Made by Takino  */


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

  int a, num, flag = 0;
  int ans = rand()%10;

  srand((unsigned) time(NULL));

  while(flag==0){
    printf("数字を入力してください＞");
    scanf("%d", &num);
    if(num == ans){
      printf("お見事！正解です\n");
      flag = 1;
    }
    else if(num < ans) printf("正解は%dより大きい数字です\n",num);
    else if(num > ans) printf("正解は%dより小さい数字です\n",num);
  }

  return 0;

}

