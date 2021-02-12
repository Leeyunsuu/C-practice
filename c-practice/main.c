//
//  main.c
//  c-practice
//
//  Created by 이윤수 on 2021/02/09.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    // insert code here...
  int year, ex1, ex2, ex3;
  
  
  printf("희망하는 연도를 입력하세요. \n");
  scanf("%d" , &year);
  
  ex1= year%4;
  ex2= year%100;
  ex3= year%400;
  printf("%d\n",ex2);
  if((ex1==0)&&(ex2==0)) {
    if(ex3 == 0){
      printf("%d년은 윤년입니다.\n", year);
    } else {
      printf("%d년은 평년입니다.\n", year);
    }
  }
  else if (ex1 == 0 ){
    printf("%d년은 윤년입니다.\n", year);
  }
  else {
    printf("%d년은 평년입니다.\n", year);
  }
  
  
  return 0;
}
