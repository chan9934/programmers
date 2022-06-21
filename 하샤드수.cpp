//문제 설명
//양의 정수 x가 하샤드 수이려면 x의 자릿수의 합으로 x가 나누어져야 합니다.예를 들어 18의 자릿수 합은 1 + 8 = 9이고, 
// 18은 9로 나누어 떨어지므로 18은 하샤드 수입니다.자연수 x를 입력받아 x가 하샤드 수인지 아닌지 검사하는 함수, solution을 완성해주세요.
//
//제한 조건
//x는 1 이상, 10000 이하인 정수입니다.

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