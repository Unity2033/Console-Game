#include <iostream>

using namespace std;

int main()
{	
	// ȸ�� �Ǻ� �˰���
	string word;

	bool check = true;

	cin >> word;

	for (int i = 0; i < word.length() / 2; i++)
	{
		     // 1      		  5 - 1 - 1 (3)
		if (word[i] != word[word.length() - 1 - i])
		{
			check = false;
		}
	}

	if (check == true)
	{
		cout << "ȸ���Դϴ�." << endl;
	}
	else
	{
		cout << "ȸ���� �ƴմϴ�." << endl;
	}


	return 0;
}


