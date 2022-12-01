#pragma once
#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
};

Node* CreateNode(int value, Node* leftPtr, Node* rightPtr)
{
	Node* newNode = new Node;

	newNode->data = value;
	newNode->left = leftPtr;
	newNode->right = rightPtr;

	return newNode;
}

// ���� ��ȸ
// 1. �ڱ� �ڽź��� ��� 
// 2. ������ �ڽ� ��带 �湮(���)
// 3. �������� �ڽ� ��带 �湮(���)
void Preorder(Node* root)
{
	if (root != NULL)
	{
		// �� ���  
		cout << root->data << " ";
		// ���� �ڽ� ��� �湮 
		Preorder(root->left);
		// ������ �ڽ� ��� �湮
		Preorder(root->right);
	}
}

// ���� ��ȸ
// 1. ���� �ڽ� ��� �湮
// 2. �ڱ� �ڽ��� ��带 ���
// 3. ������ �ڽ� ��� �湮
void Inorder(Node* root)
{
	if (root != NULL)
	{
		Inorder(root->left);
		cout << root->data << " ";
		Inorder(root->right);
	}
}

// ���� ��ȸ
// 1. ���� �ڽ� ��带 �湮
// 2. ������ �ڽ� ��带 �湮
// 3. �ڱ� �ڽ��� ��带 ��� 
void Postorder(Node* root)
{
	if (root != NULL)
	{
		Postorder(root->left);
		Postorder(root->right);
		cout << root->data << " ";
	}
}

int main()
{
	// Ʈ�� ������?
	// �� ��忡�� �����ؼ� �ٸ� ��������
	// ��ȸ�Ͽ� �ڱ� �ڽſ��� ���ƿ��� ��ȯ��
	// ���� ���� �׷����Դϴ�.

	// ���� Ʈ��
	// �ִ� 2���� �ڽ� ��带 ������ Ʈ���Դϴ�.

	Node* n7 = CreateNode(7, NULL, NULL);
	Node* n6 = CreateNode(6, NULL, NULL);
	Node* n5 = CreateNode(5, NULL, NULL);
	Node* n4 = CreateNode(4, NULL, NULL);

	Node* n3 = CreateNode(3, n6, n7);
	Node* n2 = CreateNode(2, n4, n5);
	Node* n1 = CreateNode(1, n2, n3);

	// Preorder(n1);
	// Inorder(n1);
	Postorder(n1);

	return 0;
}


