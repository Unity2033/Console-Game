#include <iostream>
#include <deque>
#include <set>

using namespace std;

int main()
{
	// deque 
	/*
	// �����Ͱ� ������ ��ġ�� ������ ��ġ�� ���� �ڿ� �ְ�,
	// �����Ͱ� ������ ��ġ�� ������ ��ġ�� ���� �տ� �ִ� ���� �����̳��Դϴ�.
	std::deque<int> dequeData;

	dequeData.push_back(1);
	dequeData.push_back(2);
	dequeData.push_front(10);
	dequeData.push_back(3);
	dequeData.push_back(4);

	// insert : ���� �����ϰ��� �ϴ� ��ġ, �ش� ��ġ �� ��
	dequeData.insert(dequeData.begin() + 2, 500);

	// erase : ���� �����ϰ� �ִ� ������ ��ġ
	dequeData.erase(dequeData.begin());

	for (int i = 0; i < dequeData.size(); i++)
	{
		cout << dequeData.at(i) << endl;

		// [ ] �ε����� �����Ͽ� ����ϴ� �κ��� ���ɻ� �����մϴ�.
		cout << dequeData[i] << endl;
	}
	*/

    // multi_set
	/*
	// set�� �ٸ��� �ߺ��� ���Ҹ� �����̳ʿ� ������ �� �ִ� �ڷᱸ���Դϴ�.
	std::multiset<int> mSet;

	mSet.insert(11);
	mSet.insert(12);
	mSet.insert(56);
	mSet.insert(44);
	mSet.insert(33);
	mSet.insert(36);
	mSet.insert(70);
	mSet.insert(94);

	for (auto iter = mSet.begin(); iter != mSet.end(); iter++)
	{
		cout << *iter << endl;
	}

	// mSet.count(?) : ���� �����̳ʿ� ?��� ���� � �����ϴ��� ������ִ� �Լ��Դϴ�.
	cout << "mSet�� 7�̶�� ���� ���� �� �� �����ϳ���? : " << mSet.count(7) << endl;

	// 4�� ó������ ���� �κ��� ����ϱ��?
	multiset<int>::iterator start;
	
	start = mSet.lower_bound(36);
	cout << "4�� ó������ ���� �κ� : " << *start << endl;
	 */


	return 0;
}


