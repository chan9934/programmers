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
        A.push_back(N % 10);
        N /= 10;
        if (N == 0)
        {
            break;
        }

    }

    sort(A.rbegin(), A.rend());
    int C = 1;
    for (int i = 0; i < A.size(); ++i)
    {
        
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