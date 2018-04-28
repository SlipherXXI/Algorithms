//
//
//
//
//

#include <iostream>
#include "Tree.hpp"
#include "BSTNode.hpp"

using namespace std;

Tree::Tree() {
	_root = NULL;
	_size = 0;
}

void Tree::add(BSTNode* newNode) {
	if (_root == NULL) {
		_root = newNode;
	}
	else {
		BSTNode* current = _root;
		BSTNode* parent = _root;

		while (current != NULL) {
			if (newNode->getKey() < current->getKey()) {
				parent = current;
				current = current->getLeft();
			}
			else {
				parent = current;
				current = current->getRight();
			}
		}
		if (newNode->getKey() < parent->getKey()) {
			//left
			parent->setLeft(newNode);
		}
		else {
			//right
			parent->setRight(newNode);
		}
	}
}

void Tree::add(int key, string data) {
	BSTNode* newNode = new BSTNode(key, data);
	add(newNode);
}

BSTNode* Tree::find(int key) {
	
	if (_root == NULL) {
		return NULL;
	}

	BSTNode* parent = _root;
	BSTNode* current = _root;

	while (current != NULL) {
		cout << current->toString() << endl;
		if (current->getKey() == key) {
			return current;
		}
		else {
			if (key < current->getKey()) {
				parent = current;
				current = current->getLeft();
			}
			else {
				parent = current;
				current = current->getRight();
			}
		}
	}
	return NULL;
}

void Tree::print() {
	print(_root);
}

void Tree::print(BSTNode* node) {
	if (node != NULL) {
		cout << node->toString() << endl;
		print(node->getLeft());
		print(node->getRight());
	}
}

int Tree::getSize() {
	return _size;
}