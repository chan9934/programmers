//���� ����
//���ڿ� s�� ���̰� 4 Ȥ�� 6�̰�, ���ڷθ� �������ִ��� Ȯ�����ִ� �Լ�, solution�� �ϼ��ϼ���.
// ���� ��� s�� "a234"�̸� False�� �����ϰ� "1234"��� True�� �����ϸ� �˴ϴ�.
//
//���� ����
//s�� ���� 1 �̻�, ���� 8 ������ ���ڿ��Դϴ�.

#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(string s) 
{

    bool answer = true;

    if (s.length() < 4 || s.length() > 6 || s.length() ==5)
    {
        return false;
    }

    for (int i = 0; i < s.size(); ++i)
    {
       

        if (s[i] < 48 || s[i] > 57)
        {
            return false;
        }

        

    }

    return true;


}

int main()
{
    string a = "0000";

   cout << boolalpha << solution(a) ;
}

