//���� ����
//�ڿ��� n�� ������ �� �ڸ� ���ڸ� ���ҷ� ������ �迭 ���·� �������ּ���.������� n�� 12345�̸�[5, 4, 3, 2, 1]�� �����մϴ�.
//
//���� ����
//n�� 10, 000, 000, 000������ �ڿ����Դϴ�.

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(long long n)
{
    long long N = n;
    vector<int> A;
    for (int i = 0; i < 10; i++)
    {
        A.push_back(N % 10);
        N /= 10;
        if (N == 0)
        {
            break;
        }

    }

    reverse(A.begin(), A.end());
  
   




    return A;
}

int main()
{
    long long B = 413142
}