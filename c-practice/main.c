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
  int num1=9, num2=10;
  
  printf("%08X & %08X = %08X\n",num1, num2, num1&num2);
  printf("%08X & %08X = %08X\n",num1, num2, num1|num2);
  printf("%08X & %08X = %08X\n",num1, num2, num1^num2);
  printf("~%08X = %08X\n",num1, ~num1);

  return 0;
}
