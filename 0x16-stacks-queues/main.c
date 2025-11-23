#include "main.h" 
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
  

  PILE *p = malloc(sizeof(PILE));
  p->sommet = NULL;
  push(p,6); 
  push(p,3); 
  push(p,2); 
  push(p,9);  
  
  PILE *pcopy = malloc(sizeof(PILE));
  pcopy->sommet = NULL;
  pcopy = copy_stack(p);
  printf("-------------The org stack ------------\n");
  print_stack(p);
  printf("the stack size is :%d \n", stackSize(p));
  printf("-------------The copy stack ------------\n");
  print_stack(pcopy);
  printf("the stack size is :%d \n", stackSize(pcopy));

 

  
  file *f = malloc(sizeof(file));  
  f->front = f->rear = NULL;
  pushF(f, 7);
  pushF(f, 17);
  pushF(f, 27);
  pushF(f, 47);
  pushF(f, 99);

  printf("----------org Queu-----------\n");
  print_queu(f);
  printf("the stackSize is %d \n", queuSize(f));  

  file *fcopy = malloc(sizeof(file));
  fcopy->front = fcopy->rear = NULL;
  fcopy = copy_queu(f);
  printf("----------copy Queu-----------\n");
  print_queu(fcopy);
  printf("the stackSize is %d \n", queuSize(fcopy));  


  return 0;
}