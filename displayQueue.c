#include "main.h"

void displayQueue(struct node *sent) {
  sent=sent->next;
  while(sent != NULL) {
    printf("%d ", sent->data);
    sent=sent->next;
  }
  printf("\n");

}
