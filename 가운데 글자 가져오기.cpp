//���� ����
//�ܾ� s�� ��� ���ڸ� ��ȯ�ϴ� �Լ�, solution�� ����� ������.�ܾ��� ���̰� ¦����� ��� �α��ڸ� ��ȯ�ϸ� �˴ϴ�.
//
//���ѻ���
//s�� ���̰� 1 �̻�, 100������ ��Ʈ���Դϴ�.
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) 
{
    string answer = "";

    if (s.length() % 2 == 0)
    {
        answer = s.substr((s.length()-1) / 2, 2);
    }
    else
    {
        answer = s.substr((s.length()-1)/2, 1);
    }
    return answer;
}

int main()
{
    string a = "abcde";
    cout << a.length()/2;
    cout << solution(a);
}