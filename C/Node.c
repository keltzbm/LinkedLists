#include "Node.h"

#include <stdio.h>
#include <stdlib.h>

struct Node createNode(int data) {
	struct Node node;
	node.data = data;
	node.next = NULL;
	return node;
};

int main() {
	struct Node test = createNode(9);
	printf("test = %d.\n", test.data);
	return 0;
};
