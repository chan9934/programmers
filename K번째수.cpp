//���� ����
//�迭 array�� i��° ���ں��� j��° ���ڱ��� �ڸ��� �������� ��, k��°�� �ִ� ���� ���Ϸ� �մϴ�.
//
//���� ��� array��[1, 5, 2, 6, 3, 7, 4], i = 2, j = 5, k = 3�̶��
//
//array�� 2��°���� 5��°���� �ڸ���[5, 2, 6, 3]�Դϴ�.
//1���� ���� �迭�� �����ϸ�[2, 3, 5, 6]�Դϴ�.
//2���� ���� �迭�� 3��° ���ڴ� 5�Դϴ�.
//�迭 array, [i, j, k]�� ���ҷ� ���� 2���� �迭 commands�� �Ű������� �־��� ��, 
//commands�� ��� ���ҿ� ���� �ռ� ������ ������ �������� �� ���� ����� �迭�� ��� return �ϵ��� solution �Լ��� �ۼ����ּ���.
//
//���ѻ���
//array�� ���̴� 1 �̻� 100 �����Դϴ�.
//array�� �� ���Ҵ� 1 �̻� 100 �����Դϴ�.
//commands�� ���̴� 1 �̻� 50 �����Դϴ�.
//commands�� �� ���Ҵ� ���̰� 3�Դϴ�.
    #include <string>
    #include <vector>
    #include <algorithm>
    #include <iostream>

    using namespace std;

    vector<int> solution(vector<int> array, vector<vector<int>> commands) 
    {
        vector<int> answer(commands.size());
        
        for (int i = 0; i < commands.size(); ++i)
        {
            vector<int> Arr;
            for (int j = commands[i][0]-1; j <= commands[i][1]-1; ++j)
            {
                
                Arr.push_back(array[j]);
            
            }
            sort(Arr.begin(), Arr.end());
            answer[i] = (Arr[commands[i][2]]-1);
        }


        return answer;
    }
int main()
{
    vector<int> array = {1, 5, 2, 6, 3, 7, 4};
    vector<vector<int>> commands {{ 2, 5, 3}, {4, 4, 1}, { 1, 7, 3 }};
    vector<int>answer = solution(array, commands);
    for (int i = 0; i < answer.size(); ++i)
    {
        cout << answer[i];
    }
}