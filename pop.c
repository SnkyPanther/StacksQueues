/////////////////////////////////////////////////////////////////////////////
//   Name: Alexandr Kochenkov        Date: 2/10/2021                       //
//   Class: CSE222A                  Assignment: Pogramming Assignment 3   //
//                                                                         //
//   Functions purpose: This functions purpose is to "pop" the first node  //
//   of the Stack linker list. It first checks if there is any nodes to pop//
//   and the sentinel node does not count. If there is something to pop    //
//   it pops the node by rearanging the next of the prev to skip it.       //
/////////////////////////////////////////////////////////////////////////////
#include "main.h"

void pop(struct node *prev) {
  struct node *curr;
  if(prev->next == NULL) {              //checks if the next of the sentinel node is NULL
    printf("Error: Stack is empty\n");  //if it is it prints out this message and returns to the main function
    return;
  }
  curr=prev->next;                      //assigns the curr to prev->next
  printf("%d\n", curr->data);           //prints the data or the number that it will "pop"
  curr=prev->next;    			//it makes the node to be skipped by having the next changed
  prev->next=curr->next;
  free(curr);                           //frees the poped node
  return;                               //returns to the main function
}
