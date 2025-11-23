#include "main.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>

  
treeNode* createNode(int val){

  treeNode *newNode = malloc(sizeof(treeNode));
  if (newNode == NULL)
    return NULL;
  
  newNode->data = val;
  newNode->left = newNode->left = NULL;

  return newNode;
}
