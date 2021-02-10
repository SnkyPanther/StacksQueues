/////////////////////////////////////////////////////////////////////////////
//   Name: Alexandr Kochenkov        Date: 2/10/2021                       //
//   Class: CSE222A                  Assignment: Pogramming Assignment 3   //
//                                                                         //
//   Functions purpose: This functions purpose is to push the number 	   //
//   that was entered to the Queue. It assigns the new node to the node    //
//   that is after the sentinel node. It first checks if there is space.   //
//                                                                         //
/////////////////////////////////////////////////////////////////////////////
#include "main.h"

int push(struct node *prev, int number)  {
  struct node *curr, *new_node=initQueue();         //defines the curr and the new_node
  if(new_node == NULL)  {                           //checks if there is still space left
    printf("No Space Left\n");
    return 0;                                       //if not returns 0
  }
  new_node->data=number;                            //equals the new_node data to the number entered
  if(prev->next == NULL) {                          //checks if the sentinel next is NULL
    prev->next=new_node;                            //if it is it sets the sentinel next to point to the new_node
    new_node->next=NULL;			    //and the next of the new_node is NULL
    return 1;					    //and returns 1 cause success
  }
  else {                                            //if the sentinel node is not NULL then there is more nodes
    curr=prev->next;				    //makes the sentinel to point to the new_node
    prev->next=new_node;			    //and the new_node to point to the next node that the sentinel
    new_node->next=curr;			    //was pointing before
    return 1;					    //returns 1 cause success
  }
}
