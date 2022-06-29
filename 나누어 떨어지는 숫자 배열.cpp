//���� ����
//array�� �� element �� divisor�� ������ �������� ���� ������������ ������ �迭�� ��ȯ�ϴ� �Լ�, solution�� �ۼ����ּ���.
//divisor�� ������ �������� element�� �ϳ��� ���ٸ� �迭�� - 1�� ��� ��ȯ�ϼ���.
//
//���ѻ���
//arr�� �ڿ����� ���� �迭�Դϴ�.
//���� i, j�� ���� i �� j �̸� arr[i] �� arr[j] �Դϴ�.
//divisor�� �ڿ����Դϴ�.
//array�� ���� 1 �̻��� �迭�Դϴ�.

    #include <string>
    #include <vector>
    #include <algorithm>

    using namespace std;

    vector<int> solution(vector<int> arr, int divisor) 
    {
        vector<int> answer;
        int Count = 0;
        for (int i = 0; i < arr.size(); ++i)
        {
            if (0 == arr[i] % divisor)
            {
                ++Count;
                answer.push_back(arr[i]);
            }
        }
        sort(answer.begin(), answer.end());

        if (0 == Count)
        {
            
            return vector<int>(1,-1);
        }
        return answer;
    }