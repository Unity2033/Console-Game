#pragma once
#include <iostream>

using namespace std;

int main()
{
	// ���� ���� 
	/*
	// �迭�� ��� ��Ҹ� �տ������� ���ʴ��
	// �̹� ���ĵ� �迭 �κа� ���Ͽ�, �ڽ���
	// ��ġ�� ã�� ���������ν� ������ �ϼ��ϴ� �˰����Դϴ�.
	int array[5] = { 5, 3, 7, 1, 2 };
	int j = 0;
	int key = 0;

	for (int i = 1; i < 5; i++)
	{
	 //  3       3
		key = array[i];

		// j�� 0�� ���� �ݺ��̵˴ϴ�.

		for (j = i - 1; j >= 0 && array[j] > key; j--)
		{
			array[j + 1] = array[j];
		}

		// j�� -1�� �Ǿ��ְ���?
		// j(-1) + 1 = 0;
		array[j + 1] = key;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << endl;
	}
	*/

	// �ܾ����
	string Alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string alphabet = "abcdefghijklmnopqrstuvwxyz";

	int array[26] = { 0, };
	int max = 0;
	int temp = 0;
	char character = NULL;

	string data;

	cin >> data;

	for (int i = 0; i < data.length(); i++)
	{
		for (int j = 0; j < Alphabet.length(); j++)
		{
			if (Alphabet[j] == data[i] || alphabet[j] == data[i])
			{
				array[j]++;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
			character = Alphabet[i];
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (max == array[i])
		{
			temp++;
		}
	}

	if (temp == 1)
	{
		cout << character << endl;
	}
	else
	{
		cout << "?" << endl;
	}

	return 0;
}


