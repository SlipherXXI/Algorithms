//
// Ryan Slipher
//
//
//

#include <iostream>
#include "BSTNode.hpp"
#include "Tree.hpp"

using namespace std;

int main(int argc, const char* argv[]) {

	BSTNode* nodeA = new BSTNode(8, "cat");
	BSTNode* nodeB = new BSTNode(10, "dog");
	BSTNode* nodeC = new BSTNode(5, "Turtle");
	BSTNode* nodeD = new BSTNode(1, "mouse");
	

	cout << nodeA->toString() << endl;
	cout << nodeB->toString() << endl;
	cout << nodeC->toString() << endl;
	cout << nodeD->toString() << endl;
	
	cout << "==================================" << endl;

	Tree* myTree = new Tree();
	myTree->add(nodeA);
	myTree->add(nodeB);
	myTree->add(nodeC);
	myTree->add(nodeD);
	
	cout << "==================================" << endl;

	//myTree->find(2);
	BSTNode* foundPtr = myTree->find(1);
	if (foundPtr != NULL) {
		cout << "found " << foundPtr->toString() << endl;
	}
	else {
		cout << "Value not found" << endl;
	}

	foundPtr = myTree->find(5);
	if (foundPtr != NULL) {
		cout << "found " << foundPtr->toString() << endl;
	}
	else {
		cout << "Value not found" << endl;
	}

	foundPtr = myTree->find(8);
	if (foundPtr != NULL) {
		cout << "found " << foundPtr->toString() << endl;
	}
	else {
		cout << "Value not found" << endl;
	}

	foundPtr = myTree->find(10);
	if (foundPtr != NULL) {
		cout << "found " << foundPtr->toString() << endl;
	}
	else {
		cout << "Value not found" << endl;
	}
	
	myTree->print();

	cin.get();
	return 0;
}
