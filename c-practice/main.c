//
//  main.c
//  c-practice
//
//  Created by 이윤수 on 2021/02/09.
//

#include <stdio.h>
#define MONTH 12
#define YEAR 30
int main(void) {
    // insert code here...
  int d;
  double f;
  
  f=5/4;
  printf("(5/4) = %f \n", f);
  
  f=(double)5/4;
  printf("(double)5/4 = %f \n", f);
  d=1.3+1.8;
  printf("1.3 + 1.8 = %d \n", d);
  d=(int)1.3+(int)1.8;
  printf("(int)1.3 + (int)1.8 = %d \n", d);
  return 0;
}
