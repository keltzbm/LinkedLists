#pragma once

typedef struct Node {
	int data;
	struct Node* next;
};

Node* createNode(int data);
