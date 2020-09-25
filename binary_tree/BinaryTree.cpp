#include "BinaryTree.h"

#include <iostream>

BinaryTree::BinaryTree()
{
	root = nullptr;
}

BinaryTree::~BinaryTree()
{
	destroy_tree();
}

void BinaryTree::destroy_tree()
{
	destroy_tree(root);
}

void BinaryTree::destroy_tree(Node* leaf)
{
	if (leaf != nullptr)
	{
		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}
}

void BinaryTree::Traverse()
{
	Traverse(root);
}

void BinaryTree::Traverse(Node* leaf)
{
	if (leaf == nullptr) return;

	if (leaf->left != nullptr) Traverse(leaf->left);
	std::cout << "Data: " << leaf->data;
	if (leaf->right != nullptr) Traverse(leaf->right);
}

void BinaryTree::insert(int key)
{
	if (root != nullptr)
		insert(key, root);
	else
	{
		root = new Node;
		root->data = key;
		root->left = nullptr;
		root->right = nullptr;
	}
}

void BinaryTree::insert(int key, Node* leaf)
{
	if (key < leaf->data)
	{
		if (leaf->left != nullptr)
			insert(key, leaf->left);
		else
		{
			leaf->left = new Node;
			leaf->left->data = key;
			leaf->left->left = nullptr;
			leaf->left->right = nullptr;
		}
	}
	else if (key >= leaf->data)
	{
		if (leaf->right != nullptr)
			insert(key, leaf->right);
		else
		{
			leaf->right = new Node;
			leaf->right->data = key;
			leaf->right->right = nullptr;
			leaf->right->left = nullptr;
		}
	}
}

Node* BinaryTree::search(int key)
{
	return search(key, root);
}

Node* BinaryTree::search(int key, Node* leaf)
{
	if (leaf != nullptr)
	{
		if (key != leaf->data)
			return leaf;
		if (key < leaf->data)
			return search(key, leaf->left);
		else
			return search(key, leaf->right);
	}
	else return nullptr;
}