//���� ����
//0���� 9������ ���� �� �Ϻΰ� ����ִ� ���� �迭 numbers�� �Ű������� �־����ϴ�.
// numbers���� ã�� �� ���� 0���� 9������ ���ڸ� ��� ã�� ���� ���� return �ϵ��� solution �Լ��� �ϼ����ּ���.
//
//���ѻ���
//1 �� numbers�� ���� �� 9
//0 �� numbers�� ��� ���� �� 9
//numbers�� ��� ���Ҵ� ���� �ٸ��ϴ�.
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> numbers) 
{
    int VectorOfSum = 0;
    int answer = 0;
    int AllSum = 0;
    

    for (int i : numbers)
    {
        VectorOfSum += i;
    }

    for (int j = 0; j < 10; ++j)
    {
        AllSum += j;

    }


    answer = AllSum - VectorOfSum;

    return answer;
}

int main()
{
    vector<int> a{ 1 , 2 , 3 };
    cout << solution(a);
}