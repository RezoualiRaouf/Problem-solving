#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

#define MAX 10
  typedef struct{
    int sommet;
    int pile[MAX];
  }PILE;

int isempty(PILE *p);
int isfull(PILE *p);
void push(PILE *p , int val);
    

#endif