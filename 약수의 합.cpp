//문제 설명
//정수 n을 입력받아 n의 약수를 모두 더한 값을 리턴하는 함수, solution을 완성해주세요.
//
//제한 사항
//n은 0 이상 3000이하인 정수입니다.
//입출력 예

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    int Number = 0;
    vector<int>Arr;
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            Arr.push_back(i);
        }
    }

    for (int i = 0; i < Arr.size(); ++i)
    {
        answer += Arr[i];
    }
    return answer;
}

int main()
{
    cout << solution(12);
}