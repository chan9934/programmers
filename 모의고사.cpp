////���� ����
////�����ڴ� ������ ������ ����� �ظ��Դϴ�.������ ���ι��� ���ǰ�翡 ���� ������ ���� ������ �մϴ�.�����ڴ� 1�� �������� ������ �������� ������ ���� ����ϴ�.
////
////1�� �����ڰ� ��� ��� : 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, ...
////2�� �����ڰ� ��� ��� : 2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2, 5, ...
////3�� �����ڰ� ��� ��� : 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, ...
////
////1�� �������� ������ ���������� ������ ������� ���� �迭 answers�� �־����� ��, 
//// ���� ���� ������ ���� ����� �������� �迭�� ��� return �ϵ��� solution �Լ��� �ۼ����ּ���.
////
////���� ����
////������ �ִ� 10, 000 ������ �����Ǿ��ֽ��ϴ�.
////������ ������ 1, 2, 3, 4, 5�� �ϳ��Դϴ�.
////���� ���� ������ ���� ����� ������ ���, return�ϴ� ���� �������� �������ּ���.
////����� ��
////answers	return
////[1, 2, 3, 4, 5][1]
////[1, 3, 2, 4, 2][1, 2, 3]

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) 
{
    vector<int> answer;
    vector<int> A = { 1, 2, 3, 4, 5 };
    int ACount = 0;
    vector<int> B = { 2, 1, 2, 3, 2, 4, 2, 5 };
    int BCount = 0;
    vector<int> C = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
    int CCount = 0;
    int Max = ACount;
    for (int i = 0; i < answers.size(); ++i)
    {
        if (A[i%5] == answers[i])
         {
            ++ACount;
            if (Max < ACount)
            {
                Max = ACount;
            }
         }
        if (B[i%8] == answers[i])
         {
            ++BCount;
            if (Max < BCount)
            {
                Max = BCount;
            }
         }
        if (C[i%10] == answers[i])
         {
            ++CCount;
            if (Max < CCount)
            {
                Max = CCount;
            }
         }
        

    }
    if (Max == ACount)
    {
        answer.push_back(1);
    }

    if (Max == BCount)
    {
        answer.push_back(2);
    }

    if (Max == CCount)
    {
        answer.push_back(3);
    }

    
    

    
    return answer;
}

int main()
{
    vector<int> A = { 1, 2, 3, 4, 5 };

    solution(A);

}