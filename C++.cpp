#include <iostream>

using namespace std;

// Ŭ������ �޸� ����
class Object
{
// Ŭ���� ������
// ������ ������Ʈ �ȿ��� ������Ʈ ó������ �־��� ��ҳ�
// ���������� �������� �������� ��Ÿ���� ���Դϴ�.

// ex) A[6] = "ABCDE";
// C��� ���� A ���������� 2�� �����°����� ���Դϴ�.

public:
	char charData; // 1 byte
	int intData;   // 4 byte
	double doubleData; // 8 byte

	// static ������ Ŭ���� ���ο� �޸𸮰� ������ �ʽ��ϴ�.
	static int staticData; // 4 byte

	void StaticDataFunction()
	{
		staticData++;
	}
};

// Ŭ���� ���ο� �ִ� static ������ Ŭ���� �ܺο���
// ���� ����ó�� �ʱ�ȭ�� �ؾ��մϴ�.
int Object::staticData = 0;

int main()
{	
	Object object1;
	Object object2;
	Object object3;
	
	object1.StaticDataFunction();
	object2.StaticDataFunction();
	object3.StaticDataFunction();


	cout << Object::staticData << endl;
	


	// Ŭ������ �޸�
	/*
	object.charData = 'A';
	object.intData = 10;
	object.doubleData = 30.5;

	// Ŭ������ �޸� ũ�⸦ �����ϴ� ���� ��� ���� �߿���
	// ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.
	cout << "Obejct Ŭ������ ũ�� : " << sizeof(object) << endl;
	*/

	// Ŭ������ ������
    /*
	cout << (int)(&(((Object*)0)->charData)) << endl;
	cout << (int)(&(((Object*)0)->intData)) << endl;
	cout << (int)(&(((Object*)0)->doubleData)) << endl;
	*/


	return 0;
}


