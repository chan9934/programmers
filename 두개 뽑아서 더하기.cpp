//�� �� �̾Ƽ� ���ϱ�
//���� ����
//���� �迭 numbers�� �־����ϴ�.numbers���� ���� �ٸ� �ε����� �ִ� �� ���� ���� �̾� ���ؼ� ���� �� �ִ� ��� ���� �迭�� ������������ ��� return �ϵ��� solution �Լ��� �ϼ����ּ���.
//
//���ѻ���
//numbers�� ���̴� 2 �̻� 100 �����Դϴ�.
//numbers�� ��� ���� 0 �̻� 100 �����Դϴ�.
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers) 
{
    vector<int> answer;
    vector<int> arr;
   

    for (int i = 0; i < numbers.size(); ++i)
    {
        for (int j = i + 1; j < numbers.size(); ++j)
        {
            arr.push_back(numbers[i] + numbers[j]);
        }
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size()-1; ++i)
    {
        if (arr[i] != arr[i + 1])
            answer.push_back(arr[i]);
    }
    answer.push_back(arr[arr.size()-1]);

  
    return answer;
}

int main()
{
    vector<int>arr = { 2,1,3,4,1 };
    solution(arr);

}