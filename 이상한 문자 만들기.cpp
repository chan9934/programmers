//이상한 문자 만들기
//문제 설명
//문자열 s는 한 개 이상의 단어로 구성되어 있습니다.각 단어는 하나 이상의 공백문자로 구분되어 있습니다.각 단어의 짝수번째 알파벳은 대문자로, 
//홀수번째 알파벳은 소문자로 바꾼 문자열을 리턴하는 함수, solution을 완성하세요.
//
//제한 사항
//문자열 전체의 짝 / 홀수 인덱스가 아니라, 단어(공백을 기준)별로 짝 / 홀수 인덱스를 판단해야합니다.
//첫 번째 글자는 0번째 인덱스로 보아 짝수번째 알파벳으로 처리해야 합니다.

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int ind = 0;
    
    

    for (int i = 0; i < s.size(); ++i)
    {
        if (i == 0)
        {
            int c = 0;
            while (1)
            {

                ind = i + c;
                if ((s[ind] == ' ') || ind == s.size())
                {
                    break;
                }
                if (c % 2 == 0)
                {
                    s[ind] = toupper(s[ind]);
                }
                if (c % 2 == 1)
                {
                    s[ind] = tolower(s[ind]);
                }
                ++c;

            }
        }
            
        if (s[i] == ' ' )
        {
            
           /* if (s[i + 1] == ' ')
            {
                break;
            }*/

            int c = 1;
            
            
            while (1)
            {

                ind = i + c;
                if ( (s[ind] == ' ') || ind == s.size())
                {
                    break;
                }
                if (c % 2 == 1)
                {
                    s[ind] = toupper(s[ind]);
                }
                if (c % 2 == 0)
                {
                    s[ind] = tolower(s[ind]);
                }
                ++c;
              
            }

        }
      
    }

    answer = s;
    return answer;
}

int main()
{
    string A = "dDd  fdasfads     dfsfdas";
   
   cout <<  solution(A);
}

//int main()
//{
//
//    string A = { "abcd efg"};
//    string b = { 32,33,34,35 };
//    string c = { 50 };
//
//    cout << "b" << b << "C" << c << endl;
//    cout << b[3] << endl;
//    cout << (A);
//    cout << A[5];
//}