//�ڸ��� ���ϱ�
//���� ����
//�ڿ��� N�� �־�����, N�� �� �ڸ����� ���� ���ؼ� return �ϴ� solution �Լ��� ����� �ּ���.
//������� N = 123�̸� 1 + 2 + 3 = 6�� return �ϸ� �˴ϴ�.
//
//���ѻ���
//N�� ���� : 100, 000, 000 ������ �ڿ���

#include <iostream>
#include <vector>

using namespace std;
int solution(int n)
{
    int answer = 0;
    vector<int>A;
    int N = n;
    

    for (int i = 0; i < 9; ++i)
    {
       
        A.push_back(N % 10);
        N /= 10;

        if (N == 0)
        {
            break;
        }
        
    }
    

    for (int i = 0; i < A.size(); ++i)
    {
        answer += A[i];
    }

  
    return answer;
}