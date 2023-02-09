#include "Node.h"

#include <stdio.h>
#include <stdlib.h>

Node* createNode(int data) {
	Node* node;
	node->data = data;
	node->next = NULL;
	return node;
};

int main() {
	Node* test = createNode(9);
	printf("test = %d.\n", test->data);
	return 0;
};
