/////////////////////////////////////////////////////////////////////////////
//   Name: Alexandr Kochenkov        Date: 2/10/2021                       //
//   Class: CSE222A                  Assignment: Pogramming Assignment 3   //
//                                                                         //
//   Functions purpose: This functions purpose is the print out the whole  //
//   linked list for the queue. 					   //
//   				                                           //
//                                                                         //
/////////////////////////////////////////////////////////////////////////////
#include "main.h"

void displayQueue(struct node *sent) {
  sent=sent->next;               //moves to the next node from the sentinel node
  while(sent != NULL) {     	 //goes until the next is not equal to NULL
    printf("%d ", sent->data);   //and prints the data of the nodes
    sent=sent->next;	         //and goes to the next node
  }
  printf("\n");			 //prints a new line

}
