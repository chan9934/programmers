//프로그래머스 모바일은 개인정보 보호를 위해 고지서를 보낼 때 고객들의 전화번호의 일부를 가립니다.
//전화번호가 문자열 phone_number로 주어졌을 때, 전화번호의 뒷 4자리를 제외한 나머지 숫자를 전부 * 으로 
// 가린 문자열을 리턴하는 함수, solution을 완성해주세요.
//
//제한 조건
//phone_number는 길이 4 이상, 20이하인 문자열입니다.
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string phone_number)
{
    
    string answer = " ";
    if (phone_number.length() == 4)
    {

        answer = phone_number;
        return answer;
        cout << answer;
    }
  else if (phone_number.length() == 5)
  {

      answer = "*" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
      return answer;
      cout << answer;
  }
     else if (phone_number.length() == 6)
    {

    answer = "**" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
    return answer;
    cout << answer;
    }
   else if (phone_number.length() == 7)
    {

        answer = "***" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else  if (phone_number.length() == 8)
    {

        answer = "****" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }


    else if (phone_number.length() == 9)
    {

        answer = "*****" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }

    else if (phone_number.length() == 10)
    {
        answer = "******" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 11)
    {
        answer = "*******" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 12)
    {
        answer = "********" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 13)
    {
        answer = "*********" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 14)
    {
       
        answer = "**********" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 15)
    {
        answer = "***********" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 16)
    {
        answer = "************" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 17)
    {
        answer = "*************" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 18)
    {
        answer = "**************" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 19)
    {
        answer = "***************" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
    else if (phone_number.length() == 20)
    {
        answer = "****************" + phone_number.erase((phone_number.length() - 4), (phone_number.length()));
        return answer;
        cout << answer;
    }
}
int main()
{
    string a = "01012345678";
     cout <<    solution(a);
    
}