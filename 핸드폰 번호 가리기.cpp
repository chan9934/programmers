//���α׷��ӽ� ������� �������� ��ȣ�� ���� �������� ���� �� ������ ��ȭ��ȣ�� �Ϻθ� �����ϴ�.
//��ȭ��ȣ�� ���ڿ� phone_number�� �־����� ��, ��ȭ��ȣ�� �� 4�ڸ��� ������ ������ ���ڸ� ���� * ���� 
// ���� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ����ּ���.
//
//���� ����
//phone_number�� ���� 4 �̻�, 20������ ���ڿ��Դϴ�.
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string phone_number)
{
    
    string answer = " ";
    if (phone_number.length() == 4)
    {

        answer = phone_number;
        return answer;
        cout << answer;
    }
  else if (phone_number.length() == 5)
  {

      answer = "*" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
      return answer;
      cout << answer;
  }
     else if (phone_number.length() == 6)
    {

    answer = "**" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
    return answer;
    cout << answer;
    }
   else if (phone_number.length() == 7)
    {

        answer = "***" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else  if (phone_number.length() == 8)
    {

        answer = "****" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }


    else if (phone_number.length() == 9)
    {

        answer = "*****" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }

    else if (phone_number.length() == 10)
    {
        answer = "******" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 11)
    {
        answer = "*******" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 12)
    {
        answer = "********" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 13)
    {
        answer = "*********" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 14)
    {
       
        answer = "**********" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 15)
    {
        answer = "***********" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 16)
    {
        answer = "************" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 17)
    {
        answer = "*************" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 18)
    {
        answer = "**************" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 19)
    {
        answer = "***************" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 20)
    {
        answer = "****************" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
}
int main()
{
    string a = "01012345678";
     cout <<    solution(a);
    
}