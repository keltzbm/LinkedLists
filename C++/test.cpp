// #include "Node.hpp"
#include "SinglyLinkedList.hpp"
#include <iostream>
using namespace std;

int main() {
	// Node<int>* n1 = new Node<int>();
	// Node<int>* n2 = new Node<int>();
	// Node<int>* n3 = new Node<int>();
	//
	// n1->data = 1;
	// n1->next = n2;
	//
	// n2->data = 2;
	// n2->next = n3;
	// n3->data = 3;
	// n3->next = nullptr;
	//
	// cout << n1->next->next->data << "\n";
	// delete n1;
	// delete n2;
	// delete n3;

	SinglyLinkedList<int> l1;
	l1.append(1);
	l1.append(2);
	l1.append(3);
	l1.prepend(0);
	l1.print();
	l1.add(-1, 0);
	l1.print();

	return 0;
};