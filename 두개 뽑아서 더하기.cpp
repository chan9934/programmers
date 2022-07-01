//두 개 뽑아서 더하기
//문제 설명
//정수 배열 numbers가 주어집니다.numbers에서 서로 다른 인덱스에 있는 두 개의 수를 뽑아 더해서 만들 수 있는 모든 수를 배열에 오름차순으로 담아 return 하도록 solution 함수를 완성해주세요.
//
//제한사항
//numbers의 길이는 2 이상 100 이하입니다.
//numbers의 모든 수는 0 이상 100 이하입니다.
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers) 
{
    vector<int> answer;
    vector<int> arr;
   

    for (int i = 0; i < numbers.size(); ++i)
    {
        for (int j = i + 1; j < numbers.size(); ++j)
        {
            arr.push_back(numbers[i] + numbers[j]);
        }
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size()-1; ++i)
    {
        if (arr[i] != arr[i + 1])
            answer.push_back(arr[i]);
    }
    answer.push_back(arr[arr.size()-1]);

  
    return answer;
}

int main()
{
    vector<int>arr = { 2,1,3,4,1 };
    solution(arr);

}