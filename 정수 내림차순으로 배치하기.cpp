//���� ����
//�Լ� solution�� ���� n�� �Ű������� �Է¹޽��ϴ�.n�� �� �ڸ����� ū�ͺ��� ���� ������ ������ ���ο� ������ �������ּ���.
// ������� n�� 118372�� 873211�� �����ϸ� �˴ϴ�.
//
//���� ����
//n�� 1�̻� 8000000000 ������ �ڿ����Դϴ�.
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) 
{
    long long N = n;
    vector<long long> A;
    long long answer = 0;
    for (int i = 0; i < 10; i++)
    {
        A[i] = N % 10;
        N /= 10;
        if(N == 0)
        {
            break;
        }
       
    }

    sort(A.end(), A.begin());

    for (int i = 0; i < A.size(); ++i)
    {
        int C = 1;
        answer += A[i] * C;
        C *= 10;
    }

    sort(A.begin(), A.end());

   

    return answer;
}

int main()
{
    solution(118372);

}