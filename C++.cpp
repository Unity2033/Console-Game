#include <iostream>

using namespace std;

class User
{
public :
	void operator() ()
	{
		cout << "Function Object" << endl;
		cout << "signal : " << signal << endl;
	}

private:
	int signal = 0;
};

int main()
{	
	// ���� ����
	/*
	// �־��� ����Ʈ �߿��� �ּڰ��� ã�� ���� �� ���� �� �տ�
	// ��ġ�� ���� ��ü�ϴ� �����Դϴ�.
	int data[5] = { 10,3,4,2,1 };

	for (int i = 0; i < 5; i++)
	{
		int minIndex = i;

		for (int j = i; j < 5; j++)
		{
			if (data[minIndex] > data[j])
			{
				minIndex = j;
			}
		}

		int temp = data[i];
		data[i] = data[minIndex];
		data[minIndex] = temp;
	}

	for (int element : data)
	{
		cout << element << endl;
	}
	*/

	// �Լ� ��ü
	// �Լ�ó�� �����ϴ� ��ü�Դϴ�.
	User user;
	user();

	return 0;
}


