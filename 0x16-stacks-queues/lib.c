#include "main.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

  
  int isempty(PILE *p){
    if (p->sommet == NULL)
      return 1;
    return 0;
  }
  

  void push(PILE *p , int val){
  
  node *new = malloc(sizeof(PILE));
    new->data = val;
    new->next = p->sommet;
   
  }
/*
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
    */