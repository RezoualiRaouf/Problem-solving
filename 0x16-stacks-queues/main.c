#include "main.h" 
#include <stdlib.h>

int main(void){
  

  PILE *p = malloc(sizeof(PILE));
  push(p, 6);
  printf("%d\n",isempty(p));
   printf("%d\n",p->pile[p->sommet - 1]); 
  return 0;
}