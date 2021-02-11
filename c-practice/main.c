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
  int x1, x2, y1, y2,x,y;
  double total, total2;
  
  printf("첫 번째 점을 입력하세요. \n");
  scanf("%d %d", &x1, &y1);
  printf("두 번째 점을 입력하세요. \n");
  scanf("%d %d", &x2, &y2);
  
  x=(float)x2-(float)x1;
  y=(float)y2-(float)y1;
  total2=pow(x, 2)+ pow(y, 2);
  total=sqrt(total2);
  printf("%f입니다.\n",total);
  printf("%f\n",total2);
  return 0;
}
