#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node * left;
	Node * right;
};

Node * CreateNode(int value, Node * leftPtr, Node * rightPtr)
{
	Node * newNode = new Node;

	newNode->data = value;
	newNode->left = leftPtr;
	newNode->right = rightPtr;

	return newNode;
}

// ���� ��ȸ
// 1. �ڱ� �ڽź��� ��� 
// 2. ������ �ڽ� ��带 �湮(���)
// 3. �������� �ڽ� ��带 �湮(���)
void Preorder(Node * root)
{
	if (root != NULL)
	{
	   // �� ���
	   // ���� �ڽ� ��� �湮 
	   // ������ �ڽ� ��� �湮
	}
}

// ���� ��ȸ
// 1. ���� �ڽ� ��带 ���
// 2. �ڱ� �ڽ��� ��带 ���
// 3. ������ �ڽ� ��带 ���

// ���� ��ȸ
// 1. ���� �ڽ� ��带 ���
// 2. ������ �ڽ� ��带 ���
// 3. �ڱ� �ڽ��� ��带 ����մϴ�. 

int main()
{
	// Ʈ�� ������?
	// �� ��忡�� �����ؼ� �ٸ� ��������
	// ��ȸ�Ͽ� �ڱ� �ڽſ��� ���ƿ��� ��ȯ��
	// ���� ���� �׷����Դϴ�.

	// ���� Ʈ��
	// �ִ� 2���� �ڽ� ��带 ������ Ʈ���Դϴ�.

	Node * n7 = CreateNode(7, NULL, NULL);
	Node * n6 = CreateNode(6, NULL, NULL);
	Node * n5 = CreateNode(5, NULL, NULL);
	Node * n4 = CreateNode(4, NULL, NULL);

	Node * n3 = CreateNode(3, n6, n7);
	Node * n2 = CreateNode(2, n4, n5);
	Node * n1 = CreateNode(1, n2, n3);
	

	return 0;
}


