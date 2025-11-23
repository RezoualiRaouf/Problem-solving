#include "main.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>

  


treeNode* insertValue(treeNode* root, int val){
  
    if (root == NULL) {
        treeNode *newNode = malloc(sizeof(treeNode));
        if (newNode == NULL)
            return NULL;
        
        newNode->data = val;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
    
    // Recursive cases - MUST capture return value
    if (val > root->data) {
        root->right = insertValue(root->right, val);
    } else if (val < root->data) {
        root->left = insertValue(root->left, val);
    }
    
    return root;
}

treeNode* exist(treeNode* node,int val){

  if (node == NULL) {
    printf("the value %d does not exist\n", val);
    return NULL;
  }

  if (val > node->data) {
    node->right = exist(node->right, val);
  }else if (val < node-> data) {
    node->left = exist(node->left, val);
  }else {
    printf("the value %d exist in the tree\n", val);
  }
  return node;
}


treeNode* findMin(treeNode *root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}


treeNode* deleteNode(treeNode* node,int val){

  if (node == NULL) {
    return NULL;
  }

  if (val > node->data) {
    node->right = deleteNode(node->right, val);
  }else if (val < node-> data) {
    node->left = deleteNode(node->left, val);
  }else {
    
    if (node->left == NULL && node->right == NULL) {
      free(node);
      return NULL;
    }
    else if (node->left == NULL) {
      treeNode* temp = node->right;
      free(node);
      return temp;
    }else if(node->right == NULL){
      treeNode* temp = node->left;
      free(node);
      return temp;
    }

    treeNode* temp = findMin(node->right); //find the most min value on the right of the node to replace int
    node->data = temp->data;
    node->right = deleteNode(node,temp->data);
     
  }
  return node;
}