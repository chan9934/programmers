//���� ����
//�Լ� solution�� ���� x�� �ڿ��� n�� �Է� �޾�, x���� ������ x�� �����ϴ� ���ڸ� n�� ���ϴ� ����Ʈ�� �����ؾ� �մϴ�.���� ���� ������ ����, 
// ������ �����ϴ� �Լ�, solution�� �ϼ����ּ���.
//
//���� ����
//x�� - 10000000 �̻�, 10000000 ������ �����Դϴ�.
//n�� 1000 ������ �ڿ����Դϴ�.

#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) 
{
    vector<long long> answer;

    for (int i = 0; i < n; ++i)
    {
        answer.push_back(x * ( i + 1));
    }

    return answer;
}