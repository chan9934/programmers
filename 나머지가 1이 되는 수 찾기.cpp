//���� ����
//�ڿ��� n�� �Ű������� �־����ϴ�.
//n�� x�� ���� �������� 1�� �ǵ��� �ϴ� ���� ���� �ڿ��� x�� return �ϵ��� solution �Լ��� �ϼ����ּ���.
//���� �׻� �������� ����� �� �ֽ��ϴ�.
//
//���ѻ���
//3 �� n �� 1, 000, 000

#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    for (int i = 1; i < n; ++i)
    {
        if (1 == n % i)
        {
            answer = i;
            break;
        }
    }
    return answer;
}

int main()
{

    solution(10);
}