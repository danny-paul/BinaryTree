#pragma once

//Ordered integer binary tree (left branches are smaller values, right branches are larger). Linked list implementation.
class BinaryTree {
public:
	BinaryTree();
	~BinaryTree();
	void printCurrent();
	bool insert(int);
	bool remove(int);
	bool search(int);
private:
	struct Node {
		int value;
		Node* left;
		Node* right;
	};
	Node* root;  //points to root node
	Node* currPtr;  //points to the currently active node in the tree
};