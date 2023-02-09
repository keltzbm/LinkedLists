

#include "Node.h"
#include "LinkedList.h"

void printLinkedList(struct LinkedList* ll) {
	printf("HEAD");
	struct Node* current = ll->head;
	while(current != NULL) {
		printf(" -> %d", current->data);
		current = current->next;
	}
	printf("\n");
}

int main() {
	struct LinkedList* ll;
	
	ll = malloc(sizeof(*ll));
}
