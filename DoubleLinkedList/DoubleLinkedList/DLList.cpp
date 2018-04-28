//
// Ryan Slipher
//
// DLList.cpp
//
//
//

#include <iostream>
#include <string>
#include "DLList.hpp"
#include "DLListNode.hpp"

using namespace std;

DLList::DLList() {
	_head = NULL;
	_size = 0;
}

void DLList::add(DLListNode* newNode) {
	if (_head == NULL) {
		_head = newNode;

	}
	else {
		newNode->setNext(_head);
		_head->setPrev(newNode);
		_head = newNode;
	}
	_size++;
}

void DLList::add(int key, string data) {
	DLListNode* newNode = new DLListNode(key, data);
	add(newNode);
}

void DLList::remove(int key) {
	if (_head != NULL) {
		DLListNode* currentPtr = _head;
		
		while (currentPtr != NULL && currentPtr->getKey() != key) {
			//update
			currentPtr = currentPtr->getNext();
		}
		if (currentPtr != NULL) {
			cout << "current " << currentPtr->toString() << endl;
			if (currentPtr == _head) {
				_head = currentPtr->getNext();
				_head->setPrev(NULL);
				currentPtr->setNext(NULL);
				currentPtr->setPrev(NULL);
				delete currentPtr;
			}
			else {
				//->setNext(currentPtr->getNext());
				currentPtr->getPrev()->setNext(currentPtr->getNext());
				currentPtr->getNext()->setPrev(currentPtr->getPrev());
				currentPtr->setNext(NULL);
				currentPtr->setPrev(NULL);
				
				delete currentPtr;
			}
		}
	}
}

DLListNode* DLList::find(int key) {
	if (_head == NULL) {
		return NULL;
	}
	else {
		DLListNode* currentPtr = _head;
		while (currentPtr != NULL) {
			//cout << "current" << endl;
			//cout << "key:" << currentPtr->getKey() << endl;
			//cout << "test key:" << key << endl;

			if (currentPtr->getKey() == key) {
				return currentPtr;
			}
			//update
			currentPtr = currentPtr->getNext();
		}
		return NULL;
	}
}

void DLList::print() {
	cout << "List contains" << endl;
	if (_head == NULL) {
		cout << "list is empty" << endl;
	}
	else {
		DLListNode* _current = _head;
		while (_current != NULL) {
			//cout << "ptr address "  << _current << endl;
			cout << "(" << _current->toString() << ")" << " --> ";
			//update
			_current = _current->getNext();
		}
		cout << 0 << endl;
	}
}

int DLList::getSize() {
	return _size;
}