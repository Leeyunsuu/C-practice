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
  
  int z = 1;
  int num = -1;
  for (int x=1; x<5; x++) {
    for (int s=4; s>x; s--) {
      printf("  ");
    }
    for (int y=1; y<=3*x+num; y++) {
      if (z%2 == 0){
        printf(" ");
      } else{
        printf("%d ",z);
      }
//      printf("*");
      z++;
      
    }
    printf("\n");
    num++;
  }  return 0;
}
