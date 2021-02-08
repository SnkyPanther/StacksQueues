#include "main.h"

int add(struct node *prev, int number)  {
  struct node *last, *curr, *new_node=initQueue();
  if(new_node == NULL) {
    return 0;
  }
  new_node->data=number;
  curr=prev->next;
  while(curr != NULL) {
    prev=curr;
    curr=curr->next;
  }
  prev->next=new_node;
  new_node->next=NULL;
  return 1;
}
