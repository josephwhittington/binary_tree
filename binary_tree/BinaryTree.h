#pragma once

struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};

class BinaryTree
{
public:
	BinaryTree();
	~BinaryTree();

	void insert(int key);
	Node* search(int key);
	void destroy_tree();

	// Traversal
	void Traverse();

private:
	void destroy_tree(Node* leaf);
	void insert(int key, Node* leaf);
	Node* search(int key, Node* leaf);

	// Traversal
	void Traverse(Node* leaf);

	Node* root;
};