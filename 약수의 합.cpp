//���� ����
//���� n�� �Է¹޾� n�� ����� ��� ���� ���� �����ϴ� �Լ�, solution�� �ϼ����ּ���.
//
//���� ����
//n�� 0 �̻� 3000������ �����Դϴ�.
//����� ��

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    int Number = 0;
    vector<int>Arr;
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            Arr.push_back(i);
        }
    }

    for (int i = 0; i < Arr.size(); ++i)
    {
        answer += Arr[i];
    }
    return answer;
}

int main()
{
    cout << solution(12);
}