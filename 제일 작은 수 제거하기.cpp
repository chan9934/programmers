//���� ����
//������ ������ �迭, arr ���� ���� ���� ���� ������ �迭�� �����ϴ� �Լ�, solution�� �ϼ����ּ���.
// ��, �����Ϸ��� �迭�� �� �迭�� ��쿣 �迭�� - 1�� ä�� �����ϼ���.������� arr��[4, 3, 2, 1]�� ����[4, 3, 2]�� ���� �ϰ�, [10]��[-1]�� ���� �մϴ�.
//
//���� ����
//arr�� ���� 1 �̻��� �迭�Դϴ�.
//�ε��� i, j�� ���� i �� j�̸� arr[i] �� arr[j] �Դϴ�.
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int z = arr[0];
    int check = 0;
    if (arr.size() == 1)
    {
        answer.push_back({ -1 });
        return answer;
    }
    
    for (int i = 0; i < arr.size(); ++i)
    {
        if (z > arr[i])
        {
            z = arr[i];
            check = i;

        }
    }
        
    for (int i = 0; i < check; ++i)
    {
        answer.push_back(arr[i]);
    }

    for (int i = check + 1; i < arr.size(); ++i)
    {
        answer.push_back(arr[i]);
    }
    
    
    return answer;
}

