#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
};

struct node *initStack();
struct node *initQueue();
void displayStack(struct node *sent);
void displayQueue(struct node *sent);
int push(struct node *list, int number);
int add(struct node *list, int number);
void pop(struct node *list);
void remov(struct node *list);

