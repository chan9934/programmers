//���� ����
//���̰� n�̰�, "���ڼ��ڼ��ڼ�...."�� ���� ������ �����ϴ� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.
//������� n�� 4�̸� "���ڼ���"�� �����ϰ� 3�̶�� "���ڼ�"�� �����ϸ� �˴ϴ�.
//
//���� ����
//n�� ���� 10, 000������ �ڿ����Դϴ�.	
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int n)
{
    string answer = "";
    vector<string> Arr;

    for (int i = 0; i < n; ++i)
    {
        if ((i & 1) % 2 == 0)
        {
            Arr.push_back("��");
        }
        else
        {
            Arr.push_back("��");
        }


    }

    for (int i = 0; i < n; ++i)
   {
        answer += Arr[i];
   }
  
    return answer;
}

int main()
{
   cout <<  solution(3);
}