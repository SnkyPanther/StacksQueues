/////////////////////////////////////////////////////////////////////////////
//   Name: Alexandr Kochenkov        Date: 2/10/2021                       //
//   Class: CSE222A                  Assignment: Pogramming Assignment 3   //
//                                                                         //
//   Functions purpose: This functions purpose is to remove the first node //
//   of the Queue linked list. Checks if the list is empty first.          //
//                                          				   //
//                                                                         //
/////////////////////////////////////////////////////////////////////////////
#include "main.h"

void removeNode(struct node *prev) {
  struct node *curr;
  if(prev->next == NULL) {                   //checks if the sentinel next is NULL
    printf("Error: Queue is empty\n");	     //if it is then it returns to the main program after printing message
    return;
  }
  curr=prev->next; 				//otherwise, it prints the number that will be deleted
  printf("%d\n", curr->data);			
  curr=prev->next;				//by reassigning the sentinel node next to point to the node after the
  prev->next=curr->next;			//node that will be deleted
  free(curr);  					//frees the node that is removed
  return;					//returns to the main function
}
