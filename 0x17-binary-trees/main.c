#include "main.h" 
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
  
  treeNode *root = NULL;
  root =  insertValue(root,2);
  root =  insertValue(root,1);
  root =  insertValue(root,5);
  root =  insertValue(root,7);
  exist(root,7);
  deleteNode(root,7);
  exist(root,7);
  return 0;
}