#include "main.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>

  
  int isempty(PILE *p){
    if (p->sommet == NULL)
      return 1;
    return 0;
  }
  

  void push(PILE *p , int val){
  
  node *newNode = malloc(sizeof(node));
    newNode->data = val;
    newNode->next = p->sommet;
    p->sommet = newNode;

  }
  int pop(PILE *p){
    
    if (isempty(p)) {
      printf("the stack is empty there is nothing to pop !\n");
      return 0;
    }
    
    node *temp = p->sommet;
    int val = temp->data;
    p->sommet = p->sommet->next;
    free(temp);
    return val;
  }

   int peak(PILE *p){
    if (isempty(p)) {
      printf("stack is empty \n");
      return 0;
    }
    int val = p->sommet->data;
    return val;
   }
  
   void print_stack(PILE *p){
    if (isempty(p)) {
      printf("stack is empty \n");
      return; 
    }
  
    node *temp = p->sommet;
    
    while (temp != NULL) {
      printf("stack:%d\n",temp->data);
      temp = temp->next;
    }
   }

   bool isValInStack(PILE *p, int val){

    if (isempty(p)) {
      printf("The stack is empty no values found \n");
      return false;
    }
    node *temp = p->sommet;
    
    while (temp != NULL) {
      if (temp ->data == val)
        return true;
      else
        temp = temp->next;
    }

    printf("the value %d was not found in the stack\n",val);
    return false;
   }


   int stackSize(PILE *p){
    if (p->sommet == NULL) {
      return 0;
    }

    node *temp = p->sommet;
    int count = 0;
    while (temp != NULL){
      count++;
      temp = temp->next;
      }
    return count;
   }
   
   void clearStack(PILE *p){

    if (p->sommet == NULL) {
      return;
    }

    node* temp;
    while (p->sommet != NULL) {
      temp = p->sommet;
      p->sommet = p->sommet->next;
      free(temp);
    }

   }
      
   int fileIsEmpty(file *f){
      if(f->front == NULL)
        return 1;
      else
        return 0;
   }

  
  PILE* copy_stack(PILE *p){
    if (p->sommet == NULL) {
      return NULL;
    }

    PILE* newStack = malloc(sizeof(PILE));
    if (newStack == NULL)
      return NULL;

    node* temp = p->sommet; // set a tarveling pointer for the main stack
    // create the first node and link it to the stack
    node *firstNode = malloc(sizeof(node));
    firstNode->next = NULL;
    firstNode->data = temp->data;
    newStack->sommet = firstNode;
    // create a pointer that pointes to the prevs node to set it's next pointer to the last created node
    node *prevNode = firstNode;
    temp = temp->next; // move to next node
    // each time create a new node and link it with the prev one untile the main stack ends
    while (temp != NULL) {
      node *newNode = malloc(sizeof(node));
      newNode->data = temp->data;
      prevNode->next = newNode;
      temp = temp->next;
      prevNode = prevNode->next;
    }
    
    return newStack;
  } 
   
   
  void pushF(file* f, int val){
    
    if (f == NULL)
      return;
    
    node* newNode = malloc(sizeof(node));
    if (newNode == NULL) return;
    newNode->next = NULL;
    newNode->data = val;

    if (f->front == NULL) {
      f->front = f->rear = newNode;
    }
    else {
      f->rear->next = newNode; //last element in the queue points at the newNode 
      f->rear = newNode; // rear pointer pointes at the newNode
    }

   }

   int popF(file* f){
    if (f->front == NULL) {
      printf("the Queue is empty ");
      return 0;
    }
    node* temp = f->front;    
    int data = temp->data;
    f->front = f->front->next;
    if (f->front ==  NULL)
      f->rear = NULL;
    free(temp);
    return data;
   }

  void print_queu(file *f){

    if (f->front == NULL) {
      printf("queue if empty !");
      return;
    }

    node *temp = f->front;

    while (temp != NULL) {
      printf("Queue : %d\n", temp->data);
      temp = temp->next;
    }
  }

  int isValInQue(file *f, int val){

    if (f->front == NULL) {
      printf("queue if empty !");
      return 0;
    }

    node *temp = f->front;
    while (temp != NULL) {
      
      if (temp->data ==val)
        return 1;
      temp = temp->next;
    }
    return 0;
  }

  int queuSize(file *f){
    if (f->front == NULL) {
      return 0;
    }

    node *temp = f->front;
    int count = 0;
    while (temp != NULL){
      count++;
      temp = temp->next;
      }
    return count;
   }

  void clearQueu(file *f){

    if (f->front == NULL) {
      return;
    }
    node* temp;

    while (f->front != NULL) {
      temp = f->front;
      f->front = f->front->next;
      free(temp);
      if (f->front == NULL)
        f->rear = NULL;
    }

  }

  file* copy_queu(file *f){
    if (f == NULL) {
      return NULL;
    }

    file* newQueu = malloc(sizeof(file));
    if (newQueu == NULL)
      return NULL;

    if (f->front == NULL)
      return newQueu;
    
    node* temp = f->front; // set a tarveling pointer for the main stack
    // create the first node and link it to the stack
    node *firstNode = malloc(sizeof(node));
    firstNode->next = NULL;
    firstNode->data = temp->data;
    newQueu->front = newQueu->rear = firstNode;
    // create a pointer that pointes to the prevs node to set it's next pointer to the last created node
    node *prevNode = firstNode;
    temp = temp->next;
    // each time create a new node and link it with the prev one untile the main stack ends
    while (temp != NULL) {
      node *newNode = malloc(sizeof(node));
      newNode->data = temp->data;
      newNode->next =NULL;
      prevNode->next = newNode;
      temp = temp->next;
      prevNode = prevNode->next;
      if (temp == NULL) {
        newQueu->rear = prevNode;
      }
    }
    
    return newQueu;
  }