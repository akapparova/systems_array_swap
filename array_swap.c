#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
  srand( time(NULL) );
  srand(0);
  int i;

  int ary_1[10];
  for (i = 0; i < 9; i ++){
    ary_1[i] = rand();
  }
  ary_1[9] = 0;

  printf("The original array:\n");
  for(i = 0; i < 10; i ++){
    printf("ary_1[%d]: %d\n", i, ary_1[i]);
  }

  int ary_2[10];
  int * pointer;
  for(i = 9; i >= 0; i --){ 
    pointer = & ary_1[9-i];  
    ary_2[i] = * pointer; 
  }

  printf("\nThe second array:\n");
  for(i = 0; i < 10; i ++){
    printf("ary_2[%d]: %d\n", i, ary_2[i]);
  }  
}
