#pragma once
#include <iostream>

using namespace std;

struct Node
{
	int key;
	int value;
	Node* next;
};

struct Bucket
{
	Node* head;
	int size;
};

struct Bucket* bucket = new Bucket[5];

int HashFunction(int key)
{
	return key % 5;
}

void Insert(int key, int value)
{
	//      0           10 % 5
	int hashIndex = HashFunction(key);

	// ��� ������ ���ο� ����� �ּҰ� ��ȯ�˴ϴ�.
	struct Node* newNode = new Node;

	newNode->key = key;
	newNode->value = value;
	newNode->next = NULL;

	// ����(hash) �ε����� size�� 0 �̶�� 
	if (bucket[hashIndex].size == 0)
	{
		// ������ �� ����
		bucket[hashIndex].size++;

		// head �����͸� ���� ó�� ���� NewNode ����Ű���� �մϴ�.
		bucket[hashIndex].head = newNode;
	}
	else
	{
		newNode->next = bucket[hashIndex].head;
		bucket[hashIndex].head = newNode;
		bucket[hashIndex].size++;

	}
}

void Remove(int key)
{
	int hashIndex = HashFunction(key);

	Node* currentNode = bucket[hashIndex].head;
	Node* prevNode = NULL;

	bool check = false;

	while (currentNode != NULL)
	{
		if (currentNode->key == key)
		{
			if (currentNode == bucket[hashIndex].head)
			{
				bucket[hashIndex].head = currentNode->next;
			}
			else
			{
				prevNode->next = currentNode->next;
			}

			bucket[hashIndex].size--;
			check = true;

			delete currentNode;
		}
		else
		{
			currentNode = currentNode->next;
		}

		prevNode = currentNode;
	}

	if (check == true)
	{
		cout << "KEY : " << key << "�� �����Ǿ����ϴ�." << endl;
	}
	else
	{
		cout << "KEY�� �������� �ʾ� ������ ������� �ʾҽ��ϴ�." << endl;
	}

}

void Search(int key)
{
	int hashIndex = HashFunction(key);

	struct Node* currentNode = bucket[hashIndex].head;

	bool check = false;

	while (currentNode != NULL)
	{
		if (currentNode->key == key)
		{
			check = true;
			break;
		}

		currentNode = currentNode->next;
	}

	if (check == true)
	{
		cout << "KEY : " << currentNode->key << " VALUE : " << currentNode->value;
	}
	else
	{
		cout << "���� ���� ã�Ƴ��� ���߽��ϴ�." << endl;
	}

}

int main()
{
	// �ؽ� ���̺�
	// �ؽ��Լ��� ����ؼ� ��ȯ�� ����
	// index�� ��Ƽ� key�� value�� �����ϴ�
	// �ڷᱸ���Դϴ�.

	for (int i = 0; i < 5; i++)
	{
		bucket[i].head = NULL;
		bucket[i].size = 0;
	}

	Insert(10, 3);
	Insert(20, 12);
	Insert(3, 6);
	Insert(2, 1);

	struct Node* currentNode;

	for (int i = 0; i < 5; i++)
	{
		currentNode = bucket[i].head;
		cout << "Bucket [" << i << "]";

		while (currentNode != NULL)
		{
			cout << " [KEY : " << currentNode->key << " VALUE : " << currentNode->value << "] ";
			currentNode = currentNode->next;
		}

		cout << endl;
	}

	return 0;
}


