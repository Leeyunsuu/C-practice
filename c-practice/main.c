//
//  main.c
//  c-practice
//
//  Created by 이윤수 on 2021/02/09.
//

#include <stdio.h>
#include <math.h>
#define MONTH 12
#define YEAR 30
int main(void) {
    // insert code here...
  int x=24;
  double interest;
  
  
  interest= x*pow(1.0+0.06, 382);
  printf("382년 간, 24달러의 이율 : %f \n", interest);
  return 0;
}
