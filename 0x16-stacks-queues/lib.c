#include "main.h"
#include <stdbool.h>
#include <stdio.h>

  
  int isempty(PILE *p){
    return p->sommet == -1; // if the condition is correct returns 1, if not returns 0
  }
  
  int isfull(PILE *p){
    return p->sommet == MAX -1;
  }
 
  void push(PILE *p , int val){
    if (isfull(p)) {
      printf("the stack is full can't push more values !\n");
      return;
    }
    p->pile[++(p->sommet)] = val; 
  }

  void pop(PILE *p){
    if (isempty(p)) {
      printf("the stack is empty there is nothing to pop !\n");
      return;
    }
    int val = p->pile[p->sommet--];
    printf("the value %d was poped out of the stack\n",val);
  }

  void peak(PILE *p){
    if (isempty(p)) {
      printf("stack is empty \n");
      return;
    }

    int val = p->pile[p->sommet];
    printf("the top value in the stack is : %d\n",val);

   }

   void print_stack(PILE *p){
    if (isempty(p)) {
      printf("stack is empty \n");
      return; 
    }
    int index = p->sommet;
    while (index >= 0) {
      printf("%d \n", p->pile[(index)--]);
    }
    
   }

   bool isValExist(PILE *p, int val){

    if (isempty(p)) {
      printf("The stack is empty no values found \n");

      return true;
    }
    
    int index = p->sommet;
    
    while (index >= 0) {
      if (p->pile[index] == val) {
        printf("%d exist in the stack with the index of : %d \n", val, index);
        return true;
      }else {
       index--;
      }
    }
    printf("the value %d was not found in the stack\n",val);
    return false;
   }