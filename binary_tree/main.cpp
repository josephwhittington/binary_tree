#include <iostream>

#include "BinaryTree.h"

int main(int argc, char** argv)
{
	BinaryTree tree;
	tree.insert(9);
	tree.insert(5);
	tree.insert(0);
	tree.insert(2);
	tree.insert(6);
	tree.insert(12);

	tree.Traverse();

	return EXIT_SUCCESS;
}