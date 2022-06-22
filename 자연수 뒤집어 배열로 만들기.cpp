//문제 설명
//자연수 n을 뒤집어 각 자리 숫자를 원소로 가지는 배열 형태로 리턴해주세요.예를들어 n이 12345이면[5, 4, 3, 2, 1]을 리턴합니다.
//
//제한 조건
//n은 10, 000, 000, 000이하인 자연수입니다.

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(long long n)
{
    long long N = n;
    vector<int> A;
    for (int i = 0; i < 10; i++)
    {
        A.push_back(N % 10);
        N /= 10;
        if (N == 0)
        {
            break;
        }

    }

    reverse(A.begin(), A.end());
  
   




    return A;
}

int main()
{
    long long B = 413142
}