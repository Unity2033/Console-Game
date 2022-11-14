#include <iostream>

using namespace std;

int buffer[5] = { 0, };

class Queue
{
private:
	int rear = -1;
	int front = -1;
public:

	void BufferPrint()
	{
		for (int i = 0; i < 5; i++)
		{
			cout << buffer[i] << endl;
		}
	}

	bool Empty()
	{
		if (front == rear)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool IsFull()
	{
		if (rear == 4)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void Push(int value)
	{
		if (IsFull() == true)
		{	// �����Ͱ� �� ���ִ� ���¶�� �����͸� �� �ֵ��� �ؾ��մϴ�.
			cout << "�����͸� ���� �� �����ϴ�." << endl;
		}
		else
		{
			buffer[++rear] = value;
		}
	}

	int Pop()
	{
		if (Empty() == true)
		{
			cout << "ť�� ������ϴ�." << endl;
			return 0;
		}
		else
		{
			// ����� ���� ��� �����ϴ� �ܰ��Դϴ�.
			int temp = buffer[++front];	

			buffer[front] = 0;

			return temp; // return ���� ��ȯ�ϴ� ��ɵ� �ϸ鼭 
			             // �Լ��� ������� �ݴϴ�.
		}
		// �����̳ʿ� �����Ͱ� ���ٸ� �����͸� �� �������� �ؾ��մϴ�.
	}

	// push	== Enqueue
	// pop == Dequeue

};


int main()
{	
	// ť 
	// FIFO (first in first out)
	// ���� ���� �����Ͱ� ���� ������ �����Դϴ�.

	// ���� ť 
	// ���� ť�� ������
	// �����͸� �߰��� �� index�� ���� �������� �ʰ� ������ ��Ű�� ������ 
	// ������ �տ� �ִ� �����Ͱ� ���� ���� ť�� �����͸� ������ �� ���� ���°� ��Ÿ���ϴ�.
	Queue queue;
	queue.Push(1);
	queue.Push(2);
	queue.Push(3);
	queue.Push(4);
	queue.Push(5);

	queue.BufferPrint();

	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;

	queue.BufferPrint();

	queue.Push(10);


	// ���� ť


	return 0;
}


