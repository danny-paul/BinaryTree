#pragma once
class BinaryTree {
public:
	BinaryTree();
	~BinaryTree();
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
};