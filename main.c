///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///   Name: Alexandr Kochenkov        Date: 2/7/2021                        ///
///   Class: CSE222A                  Assignment: Pogramming Assignment 3   ///
///                                                                         ///
///   Synopsis: This program bascically makes has two different lists that  ///
///   can store data, but differently. You can only be editing one list at a///
///   time, so you have to switch modes. One list is a stack, another is a  ///
///   queue. You can add numbers, display and delete numbers.               ///
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include "main.h"   //contains the function names and the struct
void directions();  //this function basically prints the directions when needed

int main(){
  struct node *stack, *queue;           //defining two different linked lists
  int result, number;                   
  char response[100], command, start;   //variable for the program
  queue = initQueue();                  //in the function it malloc the size and makes the next to NULL
  stack = initStack();                  //same as the initQueue malloc the size and sets the next to NULL
  printf("Welcome. This program demonstrates the use of a stack and a queue.\n"); //greeting message to the program
  directions();                         //prints the options/directions
  start = 's';                          //this is my mode varibale, currently it is 's' which means stack
  while(1) {                            //infinite loop
    printf("> ");
    fgets(response, 100, stdin);        //asks the response of the user
    result = sscanf(response, "%d", &number); //have a variable that stores the return value
    if(result == 0) {                   //the return of 0 means that the first thing that was entered was a char
      if(response[0] == 'p') {          //the option of deleting
        if(start == 's') {              //checks the mode it is in
          pop(stack);                   //pops the stack if in stack mode
        }
        else {
          removeNode(queue);            //otherwise removeNode if int queue mode
        }  
      }
      else if(response[0] == 's') {     //option of switching to stack mode and prints the linked list of stack
        start = 's';                    //resets the start to 's'
        printf("Switching to stack mode\n");
        displayStack(stack);
      }
      else if(response[0] == 'q') {     //option of switching to queue mode and prints the linked list of queue
        start = 'q';                    //this is the symbol used to represent the queue mode
        printf("Switching to queue mode\n");
        displayQueue(queue);
      }
      else if(response[0] == 'Q') {     //this option quits the program
        stackEmpty(stack);              //frees the stack
        queueEmpty(queue);              //frees the queue
        return 0;
      }
      else if(response[0] == '?') {     //shows the directions again
        directions();
      }
      else {                            //if something else entered prints directions
        directions();
      }
    }
    else if(result == 1) {              //the return value of 1 from the sscanf means that there was an integer entered
      if(start == 's') {                //first thing. 
        push(stack, number);            //checks if in stack mode, if it is then push the number to stack
      }
      else {
        add(queue, number);             //this is for the queue mode, it adds the number to the queue
      }
    }
    else {
      directions();                     //something else prints out the directions
    }
  }
}

void directions() {                    //directions function that shows what are the option of the program
  printf("Usage:\n");
  printf("#	insert # into stack or queue\n");
  printf("s	select STACK mode and display stack\n");
  printf("q	select QUEUE mode and display queue\n");
  printf("p	remove top of stack/head of queue and display\n");
  printf("Q	Quit\n");
  printf("?	Display help\n");
}
