#pragma once
#include "Node.hpp"
#include <iostream>
using namespace std;

template <typename T>
class SinglyLinkedList {
private:
	Node<T>* head;
	int size;
public:
	SinglyLinkedList() {
		head = nullptr;
		size = 0;
	}
	SinglyLinkedList(T element) {
		head = new Node<T>();
		head->data = element;
		head->next = nullptr;
		size = 1;
	}

	void add(T element, int index) {
		if(index < 0 || index >= size) {
			cout << "Index out of range.\n";
		} else if(head && index == 0) {
			prepend(element);
		} else if(head) {
			Node<T>* current = head;
			int i = 0;
			while(current->next && i < index - 1) {
				current = current->next;
				i++;
			}
			Node<T>* temp = current->next;
			current->next = new Node<T>();
			current->next->data = element;
			current->next->next = temp;
			size++;
		} else {
			head = new Node<T>();
			head->data = element;
			head->next = nullptr;
			size++;
		}
	}
	void append(T element) {
		if(head) {
			Node<T>* current = head;
			while(current->next) {
				current = current->next;
			}
			current->next = new Node<T>();
			current->next->data = element;
			current->next->next = nullptr;
		} else {
			head = new Node<T>();
			head->data = element;
			head->next = nullptr;
		}
		size++;
	}
	void prepend(T element) {
		if(head) {
			Node<T>* temp = head;
			head = new Node<T>();
			head->data = element;
			head->next = temp;
		} else {
			head = new Node<T>();
			head->data = element;
			head->next = nullptr;
		}
		size++;
	}
	void print() {
		Node<T>* current = head;
		cout << "Head -> ";
		while(current) {
			cout << current->data;
			current = current->next;
			if(current) {
				cout << " -> ";
			} else {
				cout << "\n";
			}
		}
	}
};