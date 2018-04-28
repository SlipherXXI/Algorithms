//
//
//
//
//

#include <string>
#include "BSTNode.hpp"

#ifndef Tree_hpp
#define Tree_hpp

class Tree {

private:
	BSTNode * _root;
	int _size;

public:
	Tree();

	void add(BSTNode* newnode);

	void add(int key, string data);

	BSTNode* find(int key);

	void print();

	void print(BSTNode* node);

	int getSize();
};
#endif // !Tree_hpp
