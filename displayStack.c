/////////////////////////////////////////////////////////////////////////////
//   Name: Alexandr Kochenkov        Date: 2/10/2021                       //
//   Class: CSE222A                  Assignment: Pogramming Assignment 3   //
//                                                                         //
//   Functions purpose: This functions purpose is the print out the whole  //
//   linked list for the stack. It first checks if there is anything to    //
//   be printed. If not it returns.					   //
//                                                                         //
/////////////////////////////////////////////////////////////////////////////
#include "main.h"

void displayStack(struct node *sent) {
  if(sent->next == NULL) {                    //checks if there are any nodes to print or it will seg fault
    printf("Stack is empty\n");               //prints message and return to the main program
    return;
  }
  sent=sent->next;                            //moves one node down
  printf("TOS--> ");
  while(sent != NULL) {                       //keeps going until next is NULL
    printf("%d ", sent->data);                //prints the data of each node if fits the statement
    sent=sent->next;                          //reassigns to go to the next node
  }
  printf("\n");                               //prints new line
}
