#include <iostream>

using namespace std;

struct Node
{
	int key;
	int value;
	Node * next;
};

struct Bucket
{
	Node * head;
	int size;
};


Node * CreateNode(int key, int value)
{
	Node * newNode = new Node;
	newNode->key = key;
	newNode->value = value;
	newNode->next = NULL;

	return newNode;
}

int HashFunction(int key)
{
	return key % 5;
}

void Insert(int key, int value)
{
	//      0           10 % 5
	int hashIndex = HashFunction(key);
    
	// ��� ������ ���ο� ����� �ּҰ� ��ȯ�˴ϴ�.
	struct Node * newNode = CreateNode(key, value);
	


 
}

int main()
{	
	// �ؽ� ���̺�
	// �ؽ��Լ��� ����ؼ� ��ȯ�� ����
	// index�� ��Ƽ� key�� value�� �����ϴ�
	// �ڷᱸ���Դϴ�.
	Bucket * hash = new Bucket[5];

	return 0;
}


