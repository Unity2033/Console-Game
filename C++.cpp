#include <iostream>


// ���
// ������ ���ǵǾ� �ִ� (����)Ŭ������ ��� ��� ������
// ��� �Լ��� ���� �޾�, ���� Ŭ������ ����� �� �ִ� ���Դϴ�.

// ���� Ŭ������ ����� ���� �ִ� Ŭ�����Դϴ�.
// ���� Ŭ������ ����� ���� �޴� Ŭ�����Դϴ�.

class Phone 
{
public :
    std::string name;

protected :
    void Call()
    {
        std::cout << "��ȭ �ɱ�" << std::endl;
    }

    void Message()
    {
        std::cout << "���� ������" << std::endl;

        // ���� Ŭ������ ���� Ŭ�������� ������ �Լ��� ����� �� �����ϴ�.
        // Touch();
    }
};

// ����ϴ� ���
// (����)Ŭ���� : (Phone) <- ���� Ŭ���� �̸��� �־��ָ� �˴ϴ�.
class SmartPhone : Phone
{
public :
    void Touch()
    {
        Call();
    }  
};

int main()
{
    // C++ ���� �Ҵ�
    // new (�� ������ �Ҵ��� �޸� ������ ũ��)
    int * ptr = new int;

    *ptr = 100;

    std::cout << *ptr << std::endl;
    std::cout << ptr << std::endl;

    // delete : new�� ���� �Ҵ��� �޸� ������ �����մϴ�.
    delete ptr;


    int * arrptr = new int[5];
 
    // 4 byte * 5 = 20 byte
    // [0] [1] [2] [3] [4]

    arrptr[0] = 20;
    arrptr[1] = 30; 
    arrptr[2] = 40;
    arrptr[3] = 50;
    arrptr[4] = 60;

    for (int i = 0; i < 5; i++)
    {
        std::cout << arrptr[i] << std::endl;
    }

    delete [] arrptr;


    return 0;
}

