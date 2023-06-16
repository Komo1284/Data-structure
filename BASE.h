#include <malloc.h>

struct node {
	int data;
	struct node* link;
};

struct node* getNode(void) {
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	if (newNode != NULL) {
		newNode->data = 0;
		newNode->link = NULL;
	} return newNode;
}