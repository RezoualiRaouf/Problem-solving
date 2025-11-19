#include "main.h" 
#include <stdio.h>
#include <stdlib.h>

int main(void){
  

  PILE *p = malloc(sizeof(PILE));
  p->sommet = NULL;
  push(p,6); 
  printf("the top value is %d \n",peak(p));
  push(p,3); 
    printf("the top value is %d \n",peak(p));
  pop(p);
    printf("the top value is %d \n",peak(p));
  return 0;
}