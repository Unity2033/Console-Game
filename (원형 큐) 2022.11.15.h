#pragma once
#include <iostream>

using namespace std;

int buffer[6];

class CircleQueue
{
private:
	int front = 6 - 1; // �迭�� �ִ� ũ�� - 1
	int rear = 6 - 1; // �迭�� �ִ� ũ�� - 1
public:
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

	bool isFull()
	{
		if ((rear + 1) % 6 == front)
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
		if (isFull() == true)
		{
			cout << "���� ť�� �����͸� ���� �� �����ϴ�." << endl;
		}
		else
		{
			rear = (rear + 1) % 6;
			buffer[rear] = value;
		}
	}

	int Pop()
	{
		if (Empty() == true)
		{
			cout << "�����Ͱ� ����ֽ��ϴ�." << endl;
		}
		else
		{
			front = (front + 1) % 6;
			int temp = buffer[front];

			buffer[front] = 0;
			return temp;
		}
	}
};


int main()
{
	// ���� ť�� �迭�� ������ �ε����� ����־�� �մϴ�.
	CircleQueue Queue;
	Queue.Push(10);
	Queue.Push(20);
	Queue.Push(30);
	Queue.Push(40);
	Queue.Push(50);

	cout << Queue.Pop() << endl;
	cout << Queue.Pop() << endl;
	cout << Queue.Pop() << endl;
	cout << Queue.Pop() << endl;
	cout << Queue.Pop() << endl;

	Queue.Push(10);
	Queue.Push(20);
	Queue.Push(30);
	Queue.Push(40);
	Queue.Push(50);

	return 0;
}


