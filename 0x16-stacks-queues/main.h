#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 10
  typedef struct{
    int sommet;
    int pile[MAX];
  }PILE;

int isempty(PILE *p);
int isfull(PILE *p);
void push(PILE *p , int val);
void pop(PILE *p); 
void peak(PILE *p);
void print_stack(PILE *p);
bool isValExist(PILE *p, int val);
#endif