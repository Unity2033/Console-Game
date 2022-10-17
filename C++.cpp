#include <iostream>
#include <string>

using namespace std; 

// �̸� ����(namespace)�̶�?
/*
// �Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� �����Դϴ�.
namespace ClientA
{

    void Attack()
    {
        cout << "���Ÿ� ����" << endl;
    }
}

// ClientA�� �̸� ������ ������� �ʾƵ� ����ϰڴٴ� �ǹ��Դϴ�.
using namespace ClientA;

namespace ClientB
{
    void Attack()
    {
        cout << "�ٰŸ� ����" << endl;
    }
}

int value = 20; // ���� ���� value
                // ������ ����
*/

// �⺻ �Ű�����
/*
// �Լ��� ������ �� �Ű������� ����� ���ÿ� �ʱ�ȭ�ϴ� �Ű������Դϴ�.
// �⺻ �Ű������� �����ʿ��� ���� �����ؾ� �մϴ�.
void Function(int x , int y = 30, int z = 30)
{
    cout << "x�� �� : " << x << endl;
    cout << "y�� �� : " << y << endl;
}
*/

int main()
{
    // ���� ���� �����ڶ�?
    /*
    // ���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ����ϴ� �������Դϴ�.

    int value = 10; // ���� ���� value
                    // ���� ����

    // ��ǻ�� ��� �̷� (���� ��Ģ)
    // ���� ������ ���� �̸��� ���� ������ ����Ǿ��� ��
    // ���� ����� ������ �����ϴ� ������ �̸��� ����ϴ� ��Ģ�Դϴ�.
    cout << "value�� �� : " << value << endl;

    cout << "���� ���� value �� : " << ::value << endl;

    Attack(); // using namespace�� ����ϱ� ������
              // ClientA:: 

    ClientB::Attack();
    */

    // �⺻ �Ű�����
    /*
    // �⺻ �Ű������� �����ϰ� �Ǹ� �Լ��� �μ��� 
    // �������� �ʾƵ� ����� �� �ֽ��ϴ�.

    // �Լ��� �μ��� ������ �� �Ű������� ���ʺ��� ���� ���ϴ�.

    Function(5);
    */

    // getline 
    /*
    string name;

    // [k][i][m][\0][g][e][u][m]
    // ���ڿ��� NULL���ڱ����� ����մϴ�.

    // cin >> name;

    // getline( ) �Լ� : ǥ���Է��� �޴� ��� Enter�� ���ο�
    //                   ���� �Է¹��� ���ڿ��� �����մϴ�.
    getline(cin, name);

    cout << name;
    */

    // OX����
    int input, score, sum;
    char buffer[80];

    cin >> input;

    for (int i = 0; i < input; i++)
    {
        sum = 0;
        score = 1;

        cin >> buffer;

        //  0  1  2  3  4  5  6
        // [O][X][X][O][X][O][O] = 5

        for (int j = 0; j < strlen(buffer); j++)
        {            
            if (buffer[j] == 'O')
            {
                sum += score;
                score++;
            }

            if (buffer[j] == 'X')
            {
                score = 1;
            }
        }

        cout << sum << endl;    
    }
   

    return 0;
}

