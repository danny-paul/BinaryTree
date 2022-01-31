#include "BinaryTree.h"
#include <iostream>

using namespace std;

int main() {
	BinaryTree binTree;

	//testing
	cout << "binTree.printCurrent():";
	binTree.printCurrent();
	cout << "binTree.search(0):";
	cout << binTree.search(0) << endl;
	cout << "binTree.printCurrent():";
	binTree.printCurrent();
	cout << "binTree.search(2):";
	cout << binTree.search(2) << endl;
	cout << "binTree.insert(2):";
	cout << binTree.insert(2) << endl;
	cout << "printCurrent():";
	binTree.printCurrent();
	cout << "binTree.search(2):";
	cout << binTree.search(2) << endl;
	cout << "printCurrent():";
	binTree.printCurrent();
	cout << "binTree.insert(2):";
	cout << binTree.insert(2) << endl;
	cout << "printCurrent():";
	binTree.printCurrent();
	cout << "binTree.insert(3)";
	cout << binTree.insert(3) << endl;
}