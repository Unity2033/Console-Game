#include "Transform.h"

Transform::Transform(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Transform::X() const
{
	return x;
}

int Transform::Y() const
{
	return y;
}

void Transform::SetX(int x)
{
	this->x = x;
}

void Transform::SetY(int y)
{
	this->y = y;
}

void Transform::Position(int x, int y)
{
	// X�� Y���� �����ϴ� ����ü�Դϴ�.
	COORD position = { x, y };

	// �ܼ� Ŀ���� ��ǥ�� �����ϴ� �Լ��Դϴ�.
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}
