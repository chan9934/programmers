//���� ����
//���ڿ� s�� ���ڷ� ��ȯ�� ����� ��ȯ�ϴ� �Լ�, solution�� �ϼ��ϼ���.
//
//���� ����
//s�� ���̴� 1 �̻� 5�����Դϴ�.
//s�� �Ǿտ��� ��ȣ(+, -)�� �� �� �ֽ��ϴ�.
//s�� ��ȣ�� ���ڷθ� �̷�����ֽ��ϴ�.
//s�� "0"���� �������� �ʽ��ϴ�.

#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) 
{
    string answer = " ";
    vector<int> arr;

    for (int i = 0; i < s.size(); ++i)
    {
       
        arr.push_back(s[i]);    
    }

    
    return arr;
}
int main()
{
    solution("12345");
}