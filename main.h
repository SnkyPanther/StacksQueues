/////////////////////////////////////////////////////////////////////////////
//   Name: Alexandr Kochenkov        Date: 2/10/2021                       //
//   Class: CSE222A                  Assignment: Pogramming Assignment 3   //
//                                                                         //
//   Functions purpose:  This file is a main.h file. Has the function names//
//   the struct node, and the include, so that I do not have to type it    //
//   every time.							   //
//                                                                         //
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>               //the includes
#include<stdlib.h>
struct node{                    //the struct node definition
  int data;
  struct node *next;
};

struct node *initStack();                                   //and all the functions
struct node *initQueue();          			    //some of them could have been a single function
void displayStack(struct node *sent);                       //but still put in separate functions
void displayQueue(struct node *sent);
int push(struct node *list, int number);
int add(struct node *list, int number);
void pop(struct node *list);
void removeNode(struct node *list);
void queueEmpty(struct node *prev);
void stackEmpty(struct node *prev);
