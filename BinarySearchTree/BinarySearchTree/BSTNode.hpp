//
//
//
//
//

#include <string>
using namespace std;

#ifndef BSTNode_hpp
#define BSTNode_hpp

class BSTNode{

private:
	int _key;
	string _data;
	BSTNode* _left;
	BSTNode* _right;

public:
	BSTNode();

	BSTNode(int inKey, string inData);

	~BSTNode();

	int getKey();
	string getData();
	BSTNode* getLeft();
	BSTNode* getRight();
	void setLeft(BSTNode* newLeft);
	void setRight(BSTNode* newRight);

	
	string toString();

};
#endif
