//���� ����
//�빮�ڿ� �ҹ��ڰ� �����ִ� ���ڿ� s�� �־����ϴ�.s�� 'p'�� ������ 'y'�� ������ ���� ������ True, 
//�ٸ��� False�� return �ϴ� solution�� �ϼ��ϼ���. 'p', 'y' ��� �ϳ��� ���� ���� �׻� True�� �����մϴ�.��, ������ ���� �� �빮�ڿ� �ҹ��ڴ� �������� �ʽ��ϴ�.
//
//���� ��� s��03
// 
//  "pPoooyY"�� true�� return�ϰ� "Pyy"��� false�� return�մϴ�.
//
//���ѻ���
//���ڿ� s�� ���� : 50 ������ �ڿ���
//���ڿ� s�� ���ĺ����θ� �̷���� �ֽ��ϴ�.
#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int PCount = 0;
    int YCount = 0;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == 80 || s[i] == 112)
        {
            ++YCount;
        }
        if (s[i] == 89 || s[i] == 121)
        {
            ++PCount;
        }

    }


    answer = PCount == YCount ? true : false;
  
    return answer;
}
int main()
{
    string a = "YyYyPpP";
    solution(a);
}