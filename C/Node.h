#pragma once

struct Node {
	int data;
	struct Node* next;
};

struct Node createNode(int data);
