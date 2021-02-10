//
//  main.c
//  c-practice
//
//  Created by 이윤수 on 2021/02/09.
//

#include <stdio.h>
#define MONTH 12
#define YEAR 30
int main() {
    // insert code here...
  int money,things,total, total2, total3;
  
  printf("투입할 금액을 입력하세요.\n");
  scanf("%d", &money);
  printf("물건값을 입력하세요.\n");
  scanf("%d", &things);
  
  total=money-things;
  printf("거스름돈 : %d\n", total);
  total3=total/100;
  total2= total%100;
  printf("거스름돈 100원의 개수 : %d\n", total3);
  total2=total2/10;
  printf("거스름돈 10원의 개수 : %d\n", total2);
  return 0;
}
