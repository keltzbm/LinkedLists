

#include "Node.h"
#include "LinkedList.h"

void printLinkedList(LinkedList* ll) {
	printf("HEAD");
	Node* current = ll->head;
	while(current != NULL) {
		printf(" -> %d", current->data);
		current = current->next;
	}
	printf("\n");
}

int main() {
	LinkedList* ll;
	
	ll = malloc(sizeof(*ll));
}
