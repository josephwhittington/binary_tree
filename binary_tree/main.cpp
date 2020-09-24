#include <iostream>

struct Node
{
	int data;
	struct Node* left;
	struct Node* right;

	/* @param val - the initialization data*/
	Node(int val)
	{
		data = val;

		left = NULL;
		right = NULL;
	}
};

int main(int argc, char** argv)
{
	// create root
	struct Node* root = new Node(1);

	// Create leaf nodes
	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);

	return EXIT_SUCCESS;
}