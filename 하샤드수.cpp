//���� ����
//���� ���� x�� �ϻ��� ���̷��� x�� �ڸ����� ������ x�� ���������� �մϴ�.���� ��� 18�� �ڸ��� ���� 1 + 8 = 9�̰�, 
// 18�� 9�� ������ �������Ƿ� 18�� �ϻ��� ���Դϴ�.�ڿ��� x�� �Է¹޾� x�� �ϻ��� ������ �ƴ��� �˻��ϴ� �Լ�, solution�� �ϼ����ּ���.
//
//���� ����
//x�� 1 �̻�, 10000 ������ �����Դϴ�.

#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) 
{
    bool answer = true;

    int outcome = 0;

    int a = x % 10000;
    int b = x % 1000;
    int c = x % 100;
    int d = x % 10;
    

    int sitsum = 0;

    sitsum = (a - b) / 1000 + (b - c) / 100 + (c - d) / 10 + d;

    outcome = x % sitsum;
    answer = (outcome == 0) ? 1 : 0;

    return answer;
    
}

int main()
{

   
    cout << solution(10);
}