//���� ����
//�� ���� left�� right�� �Ű������� �־����ϴ�.
// left���� right������ ��� ���� �߿���, ����� ������ ¦���� ���� ���ϰ�, ����� ������ Ȧ���� ���� �� ���� return �ϵ��� solution �Լ��� �ϼ����ּ���.
//
//���ѻ���
//1 �� left �� right �� 1, 000
#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int Answer = 0;
    
    
    for (int i = left; i <= right; ++i)
    {
        int Count = 0;
        for (int j = 1; j <= i; ++j)
        {
            if (0 == i % j)
            {
                ++Count;
            }
        }
        if (1 == Count % 2)
        {
            Answer -= i;
        }

        else
        {
            Answer += i;
        }
    }

    return Answer;
}

int main()
{
    solution(13, 17);
}