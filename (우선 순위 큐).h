#pragma once
#include <iostream>
#include <stack>
#include <unordered_map>
#include <queue>

using namespace std;

// ���� �����ϱ�
/*
int stackArray[5];
int top = -1;

int Empty()
{
	if (top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Push(int x)
{
	stackArray[++top] = x;
}

int Size()
{
	return top + 1;
}

int Top()
{
	if (top == -1)
		return -1;
	else
		return stackArray[top];
}

int Pop()
{
	return stackArray[top--];
}
*/

int main()
{
	// ���� �����ϱ�
	/*
	std::stack<int> Stack;
	//Stack.push(10);
	//Stack.pop();
	//cout << Stack.top() << endl;
	//cout << Stack.empty() << endl;

	Push(1);
	Push(2);
	Push(3);

	cout << "���� ���� �ִ� �� : " << Top() << endl;
	cout << "������ ũ�� : " << Size() << endl;
	cout << "������ ����ֳ���? : " << Empty() << endl;

	cout << Pop() << endl;
	cout << Pop() << endl;
	cout << Pop() << endl;

	cout << "������ ũ�� : " << Size() << endl;
	cout << "������ ����ֳ���? : " << Empty() << endl;

	// 1. pop
	// 2. push (O)
	// 3. size : ���� �����̳ʿ� ����ִ� �������� ����
	// 4. empty (O) : Stack�� ������ ����ִٸ� 1�� ��ȯ�մϴ�.
	//                Stack�� �����Ͱ� �ִٸ� 0�� ��ȯ�մϴ�.
	// 5. top
	*/

	// unordered_map ����
	/*
	unordered_map<int, string> uMap;

	uMap.insert(make_pair(10, "Ten"));
	uMap.insert(make_pair(1, "One"));
	uMap.insert(make_pair(7, "Seven"));
	uMap.insert(make_pair(2, "Two"));

	for (auto iter = uMap.begin(); iter != uMap.end(); iter++)
	{
		cout << "uMap�� key : " << iter->first << endl;
		cout << "uMap�� value : " << iter->second << endl;
	}
	*/

	// �켱 ���� ť
	// ť �����̳ʿ� �ִ� ���� �� ���� ū ���� TOP ��ġ�� �����ǵ���
	// �����Ǿ� �ִ� �ڷᱸ���Դϴ�.

	// �켱 ���� ť�� ��� ���������� ��(Heap)�̶�� �ڷᱸ���� 
	// �����Ǿ� �ֽ��ϴ�. 

	// �켱 ���� ť�� �����մϴ�.
	priority_queue<int> pQueue;

	pQueue.push(3);
	pQueue.push(1);
	pQueue.push(7);
	pQueue.push(5);
	pQueue.push(2);

	cout << "ť�� ������ : " << pQueue.size() << endl;

	// pQueue.empty() = 0 (false)
	// pQueue.empty() = 1 (true)
	while (pQueue.empty() == false)	// pQueue.empty�� true�� �� ������ �ݺ��մϴ�.
	{
		cout << pQueue.top() << endl; // ���� ���� �ִ� ���� ����մϴ�.
		pQueue.pop(); // ���� ���� �ִ� ���Ҹ� ���ϴ�.
	}

	return 0;
}

