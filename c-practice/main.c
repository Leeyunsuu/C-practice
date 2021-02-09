//
//  main.c
//  c-practice
//
//  Created by 이윤수 on 2021/02/09.
//

#include <stdio.h>

int main() {
    // insert code here...
  
  int num=0;
  int tem;
  printf("화씨온도를 입력하시오.\n");
  scanf("%d",&num);
  tem=(num-32)*5/9;
  printf("변환된 섭씨온도는 %d입니다.\n", tem);
  return 0;
}
