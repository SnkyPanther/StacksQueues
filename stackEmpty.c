/////////////////////////////////////////////////////////////////////////////
//   Name: Alexandr Kochenkov        Date: 2/10/2021                       //
//   Class: CSE222A                  Assignment: Pogramming Assignment 3   //
//                                                                         //
//   Functions purpose: This function's purpose is to make the queue linker//
//   list have its nodes freed.                                            //
//                                                                         //
//                                                                         //
/////////////////////////////////////////////////////////////////////////////
#include "main.h"

void stackEmpty(struct node *prev) {
  struct node *curr;
  curr=prev->next;		//defines the curr and assinges it
  while(curr != NULL){		//goes until the node next is not NULL
    free(prev);			//free the node
    prev=curr; 			//and goes to the next node in line
    curr=curr->next;
  }
  free(prev);			//free the last node
  return;			//and returns to the main program
}
