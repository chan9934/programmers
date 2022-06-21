#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, int m)
{
    vector<int> answer;

    vector<int> A;
    vector<int> B;
    vector<int> MAX;
    int MIN;
    int z = 0;


    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            A.push_back(i);
        }
    }
 
    for (int i = 1; i <= m; ++i)
    {
        if (m % i == 0)
        {
            B.push_back(i);
        }
    }

    for (int i = 0; i < A.size(); ++i)
    {
        for (int j = 0; j < B.size(); ++j)
        {
            if (A[i] == B[j])
            {
                MAX.push_back(A[i]);
                ++z;
            }
             
        }
    }
    MIN = n  * m / MAX[z - 1];
    cout << MAX[z-1];

    answer.push_back(MAX[z - 1]);
    answer.push_back(MIN);
    

    //z = 0;
    //for (int i = 1; i <= m; ++i)
    //{
    //    for (int j = 1; j <= m; ++j)
    //    {
    //        if (i % j == 0)
    //        {
    //            B[z] = j;
    //            ++z;
    //        }
    //    }
    //    cout << B[z] << endl;
    //}

    
    return answer;
}

int main()
{
    solution(12, 16);
}