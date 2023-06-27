#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

void saveData(Node** pnode, int data) {
	if (*pnode == NULL) {
		*pnode = getNode();
		if (*pnode != NULL) (*pnode)->data = data;
	}
	else return;
}

int main(void) {
	Node* p1 = NULL;
	if (p1 == NULL) saveData(&p1, 5);	

	if (p1 == NULL) saveData(&p1, 10);
	else saveData(&p1->link, 10);

	     if (p1 == NULL) saveData(&p1, 15);
	else if (p1->link == NULL) saveData(&p1->link, 15);
	else if (p1->link->link == NULL) saveData(&p1->link->link, 15);

	Node* tmp = p1;
	while (tmp != NULL) {
		printf("%d ", tmp->data);
		tmp = tmp->link;
	} printf("\n");
	return 0;
}