#include "BinaryTree.h"
#include <iostream>

BinaryTree::BinaryTree() {
	root = new Node();
	currPtr = root;
	root->value = 0;
	root->left = nullptr;
	root->right = nullptr;
}

BinaryTree::~BinaryTree() {
	//destructor
}

//Description: Will return boolean value on whether value found. Moves currPtr to that node or last node before terminating
//Parameters: Value to search tree for as integer
//Returns: Boolean value indicating if found or not found
bool BinaryTree::search(int passedVal) {
	currPtr = root;  //resets ptr 

	//iterate through tree
	while (currPtr != nullptr) {
		if (passedVal == currPtr->value) {
			//equals, return true (currPtr in right position)
			return true;
		}
		else if (passedVal < currPtr->value) {
			//passedVal is less, left branching
			if (currPtr->left != nullptr) {
				//move down branch
				currPtr = currPtr->left;
			}
			else {
				//null, return false and keep currPtr at last existing node
				return false;
			}
		}
		else {
			//passedVal is more, right branching
			if (currPtr->right != nullptr) {
				//move down branch
				currPtr = currPtr->right;
			}
			else {
				//null, return false and keep currPtr at last existing node
				return false;
			}

		}
	}
	
	
	
}

//Description: Returns boolean value if successfully inserted (failure if duplicate)
//Parameters: Value desired to be passed
//Returns: Boolean value indicating successful insertion
bool BinaryTree::insert(int passedValue) {
	Node* tmpPtr;

	//Search and place currPtr
	if (this->search(passedValue)) {
		//Value exists, disallow dups
		return false;
	}
	else {
		//new node
		tmpPtr = new Node();
		tmpPtr->value = passedValue;
		tmpPtr->left = nullptr;
		tmpPtr->right = nullptr;

		//value does not exist, insert where currPtr left off
		if (passedValue < currPtr->value) {
			//link to left side
			currPtr->left = tmpPtr;
		}
		else {
			//link to right side
			currPtr->right = tmpPtr;
		}
		return true;
	}
}

bool BinaryTree::remove(int passedValue) {
	//search first

	if (search(passedValue)) {
		//exists, remove node

		return true;
	}
	else {
		//does not exist
		return false;
	}
	return true;
}


//Description: Prints the node pointed to by the currPtr
void BinaryTree::printCurrent() {
	if (currPtr != nullptr) {
		std::cout << currPtr->value << std::endl;
	}
	else {
		std::cout << "Null" << std::endl;
	}
}