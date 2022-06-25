//문제 설명
//1부터 입력받은 숫자 n 사이에 있는 소수의 개수를 반환하는 함수, solution을 만들어 보세요.
//
//소수는 1과 자기 자신으로만 나누어지는 수를 의미합니다.
//(1은 소수가 아닙니다.)
//
//제한 조건
//n은 2이상 1000000이하의 자연수입니다.

    #include <string>
    #include <vector>
    #include <iostream>
    #include <cmath>

    using namespace std;

    int solution(int n)
    {
        int answer = 0;

        vector<int> C = { 2,3 };


        if (1 == n)
        {
            return 0;
        }
        else if (2 == n)
        {
            return 1;
        }

        else if (3 == n || 4 == n)
        {
            return 2;
        }


        for (int i = 5; i <= n; i += 2)
        {
            C.push_back(i);
            for (int count = 0; C[count] <= sqrt(i); ++count)
            {
                
                    if (i % C[count] == 0)
                    {
                        C.pop_back();
                        break;
                    }
                
            }
            
        }
        return C.size();
    }


    int main()
    {

        cout << solution(47);

    }
    
            
           

 /*           }
        */
   
        //for (int i = 3; i <= n; i += 2)
        //{

        //    for (int j = 2; j <= i; ++j)
        //    {
        //        if (j == i>>1 )
        //        {
        //            C.push_back(i);
        //            ++count;
        //            break;
        //        }
        //        else if (i % j == 0)
        //        {

        //            break;
        //        }
        //   
        //    }

        //   /* int j = 2;
        //    while (1)
        //    {

        //        if (j == i / 2)
        //        {
        //            ++count;
        //            break;
        //        }
        //        else if (i % j == 0)
        //        {

        //            break;
        //        }
        //        ++j;

        //    }*/

        //    //cout << "i의 갯수 " << i << "count의 갯수 " << count << endl;

        //}

        //if (100000 < n && n <= 200000)
        //{
        //    count = 9592;
        //    for (int i = 100001; i <= n; i += 2)
        //    {
        //        
        //        for (int j = 2; j <= i; ++j)
        //        {
        //            if (j == i/2)
        //            {
        //                ++count;
        //                break;
        //            }
        //            else if (i % j == 0)
        //            {

        //                break;
        //            }

        //        }

        //       

        //    }

        //}
        //if (200000 < n && n <= 300000)
        //{
        //    count = 17984;
        //    for (int i = 200001; i <= n; i += 2)
        //    {
        //        
        //        for (int j = 2; j <= i; ++j)
        //        {
        //            if (j == i/2)
        //            {
        //                ++count;
        //                break;
        //            }
        //            else if (i % j == 0)
        //            {

        //                break;
        //            }

        //        }

        //       

        //    }

        //}
        //if (300000 < n && n <= 400000)
        //{
        //    count = 25997;
        //    for (int i = 300001; i <= n; i += 2)
        //    {
        //        
        //        for (int j = 2; j <= i; ++j)
        //        {
        //            if (j == i/2)
        //            {
        //                ++count;
        //                break;
        //            }
        //            else if (i % j == 0)
        //            {

        //                break;
        //            }

        //        }

        //       

        //    }

        //}
        //if (400000 < n && n <= 500000)
        //{
        //    count = 33860;
        //    for (int i = 400001; i <= n; i += 2)
        //    {
        //        
        //        for (int j = 2; j <= i; ++j)
        //        {
        //            if (j == i/2)
        //            {
        //                ++count;
        //                break;
        //            }
        //            else if (i % j == 0)
        //            {

        //                break;
        //            }

        //        }

        //       

        //    }

        //}
        //if (500000 < n && n <= 600000)
        //{
        //    count = 41538;
        //    for (int i = 500001; i <= n; i += 2)
        //    {
        //        
        //        for (int j = 2; j <= i; ++j)
        //        {
        //            if (j == i/2)
        //            {
        //                ++count;
        //                break;
        //            }
        //            else if (i % j == 0)
        //            {

        //                break;
        //            }

        //        }

        //       

        //    }

        //}
        //if (600000 < n && n <= 700000)
        //{
        //    count = 49098;
        //    for (int i = 600001; i <= n; i += 2)
        //    {
        //        
        //        for (int j = 2; j <= i; ++j)
        //        {
        //            if (j == i/2)
        //            {
        //                ++count;
        //                break;
        //            }
        //            else if (i % j == 0)
        //            {

        //                break;
        //            }

        //        }

        //       

        //    }

        //}
        //if (700000 < n && n <= 800000)
        //{
        //    count = 56543;
        //    for (int i = 700001; i <= n; i += 2)
        //    {
        //        
        //        for (int j = 2; j <= i; ++j)
        //        {
        //            if (j == i/2)
        //            {
        //                ++count;
        //                break;
        //            }
        //            else if (i % j == 0)
        //            {

        //                break;
        //            }

        //        }

        //       

        //    }

        //}
        //if (800000 < n && n <= 900000)
        //{
        //    count = 63951;
        //    for (int i = 800001; i <= n; i += 2)
        //    {
        //        
        //        for (int j = 2; j <= i; ++j)
        //        {
        //            if (j == i/2)
        //            {
        //                ++count;
        //                break;
        //            }
        //            else if (i % j == 0)
        //            {

        //                break;
        //            }

        //        }

        //       

        //    }

        //}
        //if (900000 < n)
        //{
        //    count = 71274;
        //    for (int i = 900001; i <= n; i += 2)
        //    {
        //        
        //        for (int j = 2; j <= i; ++j)
        //        {
        //            if (j == i/2)
        //            {
        //                ++count;
        //                break;
        //            }
        //            else if (i % j == 0)
        //            {

        //                break;
        //            }

        //        }

        //       

        //    }

        //}


    //    return count;
    //}
