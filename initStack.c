/////////////////////////////////////////////////////////////////////////////
//   Name: Alexandr Kochenkov        Date: 2/10/2021                       //
//   Class: CSE222A                  Assignment: Pogramming Assignment 3   //
//                                                                         //
//   Functions purpose:  This function basically inits the Stack linked    //
//   list. It make size for the list and it also sets the sentinel node    //
//   next to NULL							   //
//                                                                         //
/////////////////////////////////////////////////////////////////////////////
#include "main.h"

struct node *initStack() {    //makes the list clean and sets the sentinel node
  struct node *s=malloc(sizeof(struct node));  //this allocates a block of memory for s
  s->next=NULL;  //makes the sentinel node s next be NULL
  return(s);     //returns the s, which is the cleaned list or the sentinel node

}

