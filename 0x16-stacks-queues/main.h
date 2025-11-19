#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct node{
  int data;
  struct node *next;
}node;
 
typedef struct {
  node *sommet;
} PILE;

int isempty(PILE *p);
int isfull(PILE *p);
void push(PILE *p , int val);
int pop(PILE *p); 
int peak(PILE *p);
void print_stack(PILE *p);
bool isValExist(PILE *p, int val);

#endif