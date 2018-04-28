//
//
//
//
//

#include "BSTNode.hpp"

BSTNode::BSTNode() {
	_key = 0;
	_data = "";
	_left = NULL;
	_right = NULL;

}

BSTNode::BSTNode(int inKey, string inData) {
	_key = inKey;
	_data = inData;
	_left = NULL;
	_right = NULL;
}

BSTNode::~BSTNode() {
	 
}

int BSTNode::getKey() {
	return _key;
	
}

string BSTNode::getData(){
	return _data;
}

BSTNode* BSTNode::getLeft(){
	return _left;
}

BSTNode* BSTNode::getRight(){
	return _right;
}

void BSTNode::setLeft(BSTNode* newLeft) {
	_left = newLeft;
}

void BSTNode::setRight(BSTNode* newRight) {
	_right = newRight;
}

string BSTNode::toString() {
	string outputStr = "key: ";
	outputStr.append(to_string(_key));
	outputStr.append(", data: ");
	outputStr.append(_data);
	return outputStr;
}