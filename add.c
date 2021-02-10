/////////////////////////////////////////////////////////////////////////////
//   Name: Alexandr Kochenkov        Date: 2/10/2021                       //
//   Class: CSE222A                  Assignment: Pogramming Assignment 3   //
//                                                                         //
//   Functions purpose: This function basically adds the number to Queue   //
//   list. It checks if it will be able to add more nodes and then         //
//   adds the new node right after the sentinel node                       //
//    									   //
/////////////////////////////////////////////////////////////////////////////


#include "main.h"

int add(struct node *prev, int number)  { 
  struct node  *curr, *new_node=initQueue();    //makes a curr and new_node
  if(new_node == NULL) {
    printf("Not enought memory\n");             //basically checks if there is still enough memory to add another node
    return 0;                                   //if not returns 0
  }
  new_node->data=number;                        //makes the new_node data to be equal to the number entered
  curr=prev->next;                              //sets the curr to prev->next will be used to go through the list 
  while(curr != NULL) {                         //goes until curr is not NULL
    prev=curr;                                  //and keeps moving node by node down the list
    curr=curr->next;
  }
  prev->next=new_node;                          //when at the end, puts the new_node there and set the next tp NULL
  new_node->next=NULL;
  return 1;                                     //exists program as succesful
}
