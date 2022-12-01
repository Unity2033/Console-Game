#include <iostream>

using namespace std;
#define MEMORY 100

struct Node
{
	int data[MEMORY];
	int size = 0;
};

void Insert(Node * root, int value)
{
	int index;

	// ���� �����Ͱ� �� �� ���¶�� return
	if (root->size >= MEMORY - 1)
	{
		return;
	}

	root->size++;
	index = root->size;
	root->data[index] = value;

	// ����Ǵ� ����
	// 1. ��Ʈ ����� ��
	// 2. �θ� ����� ���� Ŭ �� 

	//                   	// �θ� ��� 1(10)		�ڽ� ��� 2 20
	while ((index != 1) && (root->data[index/2] < root->data[index]))
	{
		swap(root->data[index / 2], root->data[index]);
	}

}

int main()
{	
	// ��
	// �ִ񰪰� �ּڰ��� ã�Ƴ��� ������ 
	// ������ �ϱ� ���� ��ȵ� ���� ���� Ʈ����
	// �⺻���� �� �ڷᱸ���Դϴ�.
	Node heap;

	// 10
	// 20
	// 30
	Insert(&heap, 10);
	Insert(&heap, 20);
	Insert(&heap, 30);

	for (int i = 1; i <= 3; i++)
	{
		cout << heap.data[i] << endl;
	}


	return 0;
}


