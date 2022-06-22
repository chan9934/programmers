//문제 설명
//함수 solution은 정수 n을 매개변수로 입력받습니다.n의 각 자릿수를 큰것부터 작은 순으로 정렬한 새로운 정수를 리턴해주세요.
// 예를들어 n이 118372면 873211을 리턴하면 됩니다.
//
//제한 조건
//n은 1이상 8000000000 이하인 자연수입니다.
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) 
{
    long long N = n;
    vector<long long> A;
    long long answer = 0;
    for (int i = 0; i < 10; i++)
    {
        A[i] = N % 10;
        N /= 10;
        if(N == 0)
        {
            break;
        }
       
    }

    sort(A.end(), A.begin());

    for (int i = 0; i < A.size(); ++i)
    {
        int C = 1;
        answer += A[i] * C;
        C *= 10;
    }

    sort(A.begin(), A.end());

   

    return answer;
}

int main()
{
    solution(118372);

}