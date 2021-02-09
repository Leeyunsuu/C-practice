//
//  main.c
//  c-practice
//
//  Created by 이윤수 on 2021/02/09.
//

#include <stdio.h>
#define EXCHANGE_RATE 1113.55
int main() {
    // insert code here...
  
  int num;
  float result;
  printf("달러를 입력하세요.\n");
  scanf("%d", &num);
  result= EXCHANGE_RATE*num;
  printf("%.2f\n", result);
  return 0;
}
