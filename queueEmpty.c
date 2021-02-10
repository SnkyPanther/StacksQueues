/////////////////////////////////////////////////////////////////////////////
//   Name: Alexandr Kochenkov        Date: 2/10/2021                       //
//   Class: CSE222A                  Assignment: Pogramming Assignment 3   //
//                                                                         //
//   Functions purpose: This function's purpose is to make the stack linker//
//   have its nodes freed. 					           //
//     									   //
//                                                                         //
/////////////////////////////////////////////////////////////////////////////
#include "main.h"

void queueEmpty(struct node *prev)  {
  struct node *curr;
  curr=prev->next;            //assigns the curr
  while(curr != NULL) {       //goes until the curr is not NULL
    free(prev);		      //frees the node
    prev=curr;		      //and goes to the next node in line
    curr=curr->next;
  }
  free(prev);		      //frees the last node
  return;		      //returns to the main program
}
