//문제 설명
//문자열로 구성된 리스트 strings와, 정수 n이 주어졌을 때, 각 문자열의 인덱스 n번째 글자를 기준으로 오름차순 정렬하려 합니다.
// 예를 들어 strings가["sun", "bed", "car"]이고 n이 1이면 각 단어의 인덱스 1의 문자 "u", "e", "a"로 strings를 정렬합니다.
//
//제한 조건
//strings는 길이 1 이상, 50이하인 배열입니다.
//strings의 원소는 소문자 알파벳으로 이루어져 있습니다.
//strings의 원소는 길이 1 이상, 100이하인 문자열입니다.
//모든 strings의 원소의 길이는 n보다 큽니다.
//인덱스 1의 문자가 같은 문자열이 여럿 일 경우, 사전순으로 앞선 문자열이 앞쪽에 위치합니다.
//입출력 예
//strings	n	return
//["sun", "bed", "car"]	1["car", "bed", "sun"]
//["abce", "abcd", "cdx"]	2["abcd", "abce", "cdx"]

#include <string>

#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


using namespace std;

vector<string> solution(vector<string> strings, int n)
{

    vector<string> answer;
    sort(strings.begin(), strings.end());
    while (1)
    {
        bool bFinish = true;

        for (int i = 0; i < strings.size() - 1; ++i)
        {

            if (strings[i][n] > strings[i + 1][n])
            {
                string temp = strings[i];
                strings[i] = strings[i + 1];
                strings[i + 1] = temp;
                bFinish = false;
            }
        }
        if (bFinish)
            break;
    }

   
    return strings;

}
//vector<string> solution(vector<string> strings, int n)
//{
//
//    vector<string> answer;
//
//    while (1)
//    {
//        bool bFinish = true;
//
//        for (int i = 0; i < strings.size() - 1; ++i)
//        {
//            for (int j = 0; j < strings[i].size() && j < strings[i + 1].size(); ++j)
//            {
//
//                if (strings[i][j] > strings[i + 1][j]   )
//                {
//                    string temp = strings[i];
//                    strings[i] = strings[i + 1];
//                    strings[i + 1] = temp;
//                    bFinish = false;
//                }
//            }
//        }
//        if (bFinish)
//        {
//            break;
//        }
//
//    }
//            for (int j = 0; j < strings[i].size() && j < strings[i + 1].size(); ++j)
//            {
//                if (strings[i][j] == strings[i + 1][j])
//                {
//
//                }
//            }
//        }
//        
//        if (bFinish)
//            break;
//    
//    
//
//           
//      
//        return strings;
//   
//}

int main()
{
    vector<string> strings = { "abc", "abcq", "abce"};

   strings = solution(strings, 1);
   for (int i = 0; i < strings.size(); ++i)
   {
       cout << strings[i] << endl;
   }
}