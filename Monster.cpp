#include "Monster.h"

Monster::Monster()
{
	std::cout << this << std::endl;
}

// Monster Ŭ������ ������
void Monster::Attack(int power)
{
	// Ŭ������ ��� ������ �Ű� ������ �̸����� �� 
	// this�� ��Ȯ�ϰ� �����Ͽ� ���� ������ �� �ֽ��ϴ�.
	this->power = power;
	std::cout << this->power << std::endl;
}
