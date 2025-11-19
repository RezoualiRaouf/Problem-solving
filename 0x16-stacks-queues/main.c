#include "main.h" 
#include <stdlib.h>

int main(void){
  

  PILE *p = malloc(sizeof(PILE));
  p->sommet = -1;
  isValExist(p,5);
  push(p, 3);
  isValExist(p,5);
  push(p, 5);
  isValExist(p,5);
  push(p, 6);
  peak(p);
  isValExist(p,3); 
  print_stack(p);
  return 0;
}