#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct treeNode{
  int data;
  struct treeNode *left;
  struct treeNode *right;
}treeNode;
 
typedef struct{
  treeNode *root;
} binaryTree;

treeNode* createNode(int val);
treeNode* insertValue(treeNode* node,int val);
treeNode* exist(treeNode* node,int val);
treeNode* findMin(treeNode *root);
treeNode* deleteNode(treeNode* node,int val);
#endif