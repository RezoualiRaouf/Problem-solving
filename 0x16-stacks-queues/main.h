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

typedef struct{
  node* front;
  node* rear;
  int size;
} file;

int isempty(PILE *p);
int isfull(PILE *p);
void push(PILE *p , int val);
int pop(PILE *p); 
int peak(PILE *p);
void print_stack(PILE *p);
bool isValInStack(PILE *p, int val);
int stackSize(PILE *p);
void clearStack(PILE*p);
PILE* copy_stack(PILE *p);


void pushF(file* f, int val);
int popF(file* f);
void print_queu(file *f);
int isValInQue(file *f, int val);
int queuSize(file *f);
void clearQueu(file *f);
file* copy_queu(file *f);

#endif