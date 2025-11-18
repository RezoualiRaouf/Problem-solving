#include <stdio.h>
#include <stdlib.h>

  typedef struct{
    int sommet;
    int pile[10];
  }PILE;

  int isempty(PILE p){
    return p.sommet == -1; // if the condition is correct returns 1, if not returns 0
  }
  
int main(void){
  
  PILE p;
  printf("%d\n",isempty(p));
  
  return 0;
}