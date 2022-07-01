//문제 설명
//단어 s의 가운데 글자를 반환하는 함수, solution을 만들어 보세요.단어의 길이가 짝수라면 가운데 두글자를 반환하면 됩니다.
//
//재한사항
//s는 길이가 1 이상, 100이하인 스트링입니다.
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) 
{
    string answer = "";

    if (s.length() % 2 == 0)
    {
        answer = s.substr((s.length()-1) / 2, 2);
    }
    else
    {
        answer = s.substr((s.length()-1)/2, 1);
    }
    return answer;
}

int main()
{
    string a = "abcde";
    cout << a.length()/2;
    cout << solution(a);
}