//���� ����
//�迭 arr�� �־����ϴ�.�迭 arr�� �� ���Ҵ� ���� 0���� 9������ �̷���� �ֽ��ϴ�.
//�̶�, �迭 arr���� ���������� ��Ÿ���� ���ڴ� �ϳ��� ����� ���� �����Ϸ��� �մϴ�.
//��, ���ŵ� �� ���� ������ ��ȯ�� ���� �迭 arr�� ���ҵ��� ������ �����ؾ� �մϴ�.���� ���,
//
//arr = [1, 1, 3, 3, 0, 1, 1] �̸�[1, 3, 0, 1] �� return �մϴ�.
//arr = [4, 4, 4, 3, 3] �̸�[4, 3] �� return �մϴ�.
//�迭 arr���� ���������� ��Ÿ���� ���ڴ� �����ϰ� ���� ������ return �ϴ� solution �Լ��� �ϼ��� �ּ���.
//
//���ѻ���
//�迭 arr�� ũ�� : 1, 000, 000 ������ �ڿ���
//�迭 arr�� ������ ũ�� : 0���� ũ�ų� ���� 9���� �۰ų� ���� ����

#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    for (int i = 0; i < arr.size()-1; ++i)
    {
        if (arr[i] != arr[i + 1])
            answer.push_back(arr[i]);
    }
   
        answer.push_back(arr[arr.size() - 1]);
   
   

    return answer;
}