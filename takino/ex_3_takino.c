/*
  ex_3_takino.c
  Made by Takino  */

#include<stdio.h>

int main(){

  int num1, num2, num3, num4, num5, num6, num7, num8, num9;

  printf("1 2 3\n4 5 6\n7 8 9\n");
  printf("上記を参考に行列を入力してください＞\n");
  scanf("%d %d %d", &num1, &num2, &num3);
  scanf("%d %d %d", &num4, &num5, &num6);
  scanf("%d %d %d", &num7, &num8, &num9);

  printf("転置行列：\n");
  printf("%d %d %d\n", num1, num4, num7);
  printf("%d %d %d\n", num2, num5, num8);
  printf("%d %d %d\n", num3, num6, num9);

  return 0;

}
