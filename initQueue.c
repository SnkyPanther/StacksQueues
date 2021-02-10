/////////////////////////////////////////////////////////////////////////////
//   Name: Alexandr Kochenkov        Date: 2/10/2021                       //
//   Class: CSE222A                  Assignment: Pogramming Assignment 3   //
//                                                                         //
//   Functions purpose: This functions purpose is to init the linker list  //
//   queue. It first makes space for the list and sent the next to NULL.   //
//                                         				   //
//                                                                         //
/////////////////////////////////////////////////////////////////////////////
#include "main.h"

struct node *initQueue() {    //makes the Queue list clean and sets the sentinel node
  struct node *s=malloc(sizeof(struct node));  //this allocates a block of memory for s
  s->next=NULL;  //makes the sentinel node s next be NULL
  return(s);     //returns the s, which is the cleaned list or the sentinel node

}
