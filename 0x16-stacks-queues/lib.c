#include "main.h"

  
  int isempty(PILE *p){
    return p->sommet == -1; // if the condition is correct returns 1, if not returns 0
  }
  
  int isfull(PILE *p){
    return p->sommet == MAX -1;
  }
 
  void push(PILE *p , int val){
    p->pile[p->sommet] = val; 
    p->sommet++;
  }