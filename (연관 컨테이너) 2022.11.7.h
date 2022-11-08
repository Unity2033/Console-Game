#pragma once
#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
	// STL vector, list	// ���� �����̳�
	// STL stack, queue // �����̳� �����
	// STL map, set // ���� �����̳�

	// MAP�̶�?
	/*
	// ����Ʈ�� �迭ó�� ���������� �ش� ����� ����
	// ������ �ʰ� key ���� ���ؼ� value ���� ����ϴ�.
	std::map<string, int> mapData;
	mapData.insert({ "��", 1000 });
	mapData.insert({ "��", 4000 });
	mapData.insert({ "��", 2500 });

	// (value)���� �ߺ��� �� ������, Key ���� ������ ������
	// �ߺ��� �����ʽ��ϴ�.

	for (auto iter = mapData.begin(); iter != mapData.end(); iter++)
	{
		// KEY : iter->first�� �����ؾ� �մϴ�.
		// VALUE : ither->second�� �������ּž� �մϴ�.
		cout << "KEY : " << iter->first << " VALUE : " << iter->second << endl;
	}

	// MAP Ű���� �������� �����ϸ�, ������������ �����մϴ�.
	// ù��° �ּҸ� ����Ű�� iterator�� mapData.end()���� ��ȸ�ϸ鼭
	// "�Ź�" �̶�� Key ���� �ִٸ� ���ǹ��� �����մϴ�.

	if (mapData.find("�Ź�") != mapData.end())
	{
		cout << "���� KEY ���� �����մϴ�." << endl;
	}
	else
	{
		cout << "���� KEY ���� �������� �ʽ��ϴ�." << endl;
	}

	// �ߺ��� Ű ���� �����ϴ� ����
	// MAP�� �ߺ��� KEY ���� ������� �ʽ��ϴ�.
	mapData.insert({ "��", 3000 });

	// VALUE�� �ߺ��Ǹ� mapData�� Insert�� ���˴ϴ�.
	mapData.insert({ "����", 1000 });

	// mapData�� �ִ� �����͸� �����Ϸ��� erase�� Ű���� �Է����ֽø� �˴ϴ�.
	mapData.erase("��");

	for (auto iter = mapData.begin(); iter != mapData.end(); iter++)
	{
		// KEY : iter->first�� �����ؾ� �մϴ�.
		// VALUE : ither->second�� �������ּž� �մϴ�.
		cout << "KEY : " << iter->first << " VALUE : " << iter->second << endl;
	}
	*/

	// SET�̶�?
	// Ű�����θ� ���ҵ��� �������� �̷���� �����̳��Դϴ�.
	// SET �ڷᱸ���� Ű���� �ߺ��� ������� �ʽ��ϴ�.
	std::set<int> setData;

	setData.insert(10);
	setData.insert(20);
	setData.insert(30);
	setData.insert(40);
	setData.insert(50);
	setData.insert(60);

	for (auto iter = setData.begin(); iter != setData.end(); iter++)
	{
		cout << *iter << endl;
	}

	// ���� �ߺ��Ǿ�����, �ȵǾ����� �Ǵ��մϴ�.
	// �ߺ��� ���� ���� ������ ���� SET �ڷᱸ���� ����˴ϴ�.
	pair<set<int>::iterator, bool> check = setData.insert(15);

	if (check.second)
	{
		cout << "���� �Ϸ�" << endl;
	}
	else
	{
		cout << "���� ���� (�ߺ��� ���� �����մϴ�.)" << endl;
	}

	return 0;
}