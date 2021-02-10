/////////////////////////////////////////////////////////////////////////////
//   Name: Alexandr Kochenkov        Date: 2/10/2021                       //
//   Class: CSE222A                  Assignment: Pogramming Assignment 3   //
//                                                                         //
//   Functions purpose:  This function prints out the linker list of the   //
//   queue list. It moves down the stored list and prints out the data.    //
//   									   //
//                                                                         //
/////////////////////////////////////////////////////////////////////////////
#include "main.h"

void displayQueue(struct node *sent) {
  if(sent->next == NULL) {                    //checks if there are any nodes to print or it will seg fault
    printf("Queue is empty\n");               //prints message and return to the main program
    return;
  }
  sent=sent->next;                //next node of the sentinel node
  printf("HEAD--> ");            
  while(sent != NULL) {           //goes down the list while next is not NULL
    printf("%d ", sent->data);    //prints the data of the nodes
    sent=sent->next;              //goes to the next node
  }
  printf("<-- TAIL\n");           //prints the tail

}
