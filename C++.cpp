#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <vector>

using namespace std;

int main()
{
	// std::string 
#pragma region ���ڿ� ���� ����
	/*
	string name = "KimGeumSoo";
	string * name1 = new string(name);

	cout << "name ������ �� : " << name << endl;
	cout << "name1 ������ �� : " << *name1 << endl;

	// append : string ��ü�� ���� ���� �ִ� �޸𸮿� 
	// �����͸� �߰��մϴ�.
	name.append("11");
						
	delete name1;

	// nullptr Null �����Ͷ�?
	// �� �̻� �ƹ� ��ġ�� �������� �ʴ� �������Դϴ�.
	name1 = nullptr;

	if (name1 == nullptr)
	{
		name1 = new string("�ȳ��ϼ���.");
	}

	// ������ ����
	// ���� ����

	// 10 / 2 (������)
	// 10 *	0.5 (����) <- ����ȭ�� ����� ȿ������ �����Դϴ�.

	cout << "name ������ �� : " << name << endl;
	cout << "name1 ������ �� : " << *name1 << endl;
	*/
#pragma endregion

	// ���� 1 byte
	// �ѱ� 2 byte
	// Ư����ȣ 3 byte
	vector<string> data = {"��","��","��","��","��"};

	// vector�� ���Ұ� ������� true�� ��ȯ�մϴ�.
	// vector�� ���Ұ� �ִٸ� false�� ��ȯ�մϴ�.
	
	// resize : vector �޸��� ũ�⸦ �����մϴ�. 
	//data.resize(10);

	data.push_back("a");
	data.push_back("a");
	data.push_back("a");
	data.push_back("a");
	data.push_back("a");
	data.push_back("a");
	data.push_back("a");

	// size() 
	// ������ ������ ������ ��ȯ�մϴ�.
	cout << data.size() << endl;
	
	// capacity()
	// �Ҵ�� �޸� ������ ũ�⸦ ��ȯ�մϴ�.
	// ���� �Ҵ��� ������ ���� Ŀ���鼭 capacity�� �Ҵ��ϰ� �˴ϴ�.
	// ���� �޸��� 1.5�踦 ������Ű�� �˴ϴ�. 
	// �̷��� �޸𸮸� �Ҵ� ������ push_back�� �Ͼ ������ �����Ҵ��� �ϰ� �Ǹ�
	// ��ȿ�����̱� ������ �̸� ���ص� ��ŭ �����Ҵ��� �ѹ��� �ϴ� ���Դϴ�.
	cout << data.capacity() << endl;

	//while (!data.empty())
	//{
	//	if (GetAsyncKeyState(VK_SPACE))
	//	{
	//		data.pop_back();
	//	}

	//	// [0] [1] [2] [3]
	//	// "��","��","��","��"
	//	for (string element : data)
	//	{
	//		cout << element << " ";
	//	}

	//	Sleep(500); // 0.5�� ���
	//	system("cls");
	//}


}


