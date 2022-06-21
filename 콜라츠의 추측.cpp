#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num)
{
    int answer = 0;
    if (num == 1)
    {
        answer = 0;
        return answer;
    }

    else
    {
        while (answer != 450)
        {
            if ((num % 2) == 0)
            {

                if (num == 1)
                {
                    return answer;
                    break;
                }

                else
                {
                    num /= 2;
                    ++answer;
                }
            }

            else
            {

                if (num == 1)
                {
                    return answer;
                    break;
                }

                else
                {
                    num = num * 3 + 1;
                    ++answer;
                }
            }
        }
        return -1;
    }




    
}

int main()
{
    int a = 8;

    cout << solution(a) << endl;
}