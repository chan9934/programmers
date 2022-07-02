//네오와 프로도가 숫자놀이를 하고 있습니다.네오가 프로도에게 숫자를 건넬 때 일부 자릿수를 영단어로 바꾼 카드를 건네주면 프로도는 원래 숫자를 찾는 게임입니다.
//
//다음은 숫자의 일부 자릿수를 영단어로 바꾸는 예시입니다.
//
//1478 → "one4seveneight"
//234567 → "23four5six7"
//10203 → "1zerotwozero3"
//이렇게 숫자의 일부 자릿수가 영단어로 바뀌어졌거나, 혹은 바뀌지 않고 그대로인 문자열 s가 매개변수로 주어집니다.s가 의미하는 원래 숫자를 return 하도록 solution 함수를 완성해주세요.
//
//참고로 각 숫자에 대응되는 영단어는 다음 표와 같습니다.
//
//숫자	영단어
//0	zero
//1	one
//2	two
//3	three
//4	four
//5	five
//6	six
//7	seven
//8	eight
//9	nine
    #include <string>
    #include <vector>
    #include <iostream>

    using namespace std;


    int solution(string s) 
    {
    
        int answer = 0;
        __int64 i = 0;
        while (1)
        {

            if (97 <= s[i])
            {
                switch (s[i])
                {
                case 122:
                    s[i] = 48;
                    s.erase(i+1, 3);
                    break;
                case 111:
                    s[i] = 49;
                    s.erase(i + 1, 2);
                    break;
                case 101:
                    s[i] = 56;
                    s.erase(i + 1, 4);
                    break;
                case 110:
                    s[i] = 57;
                    s.erase(i + 1, 3);
                    break;
                case 116:
                    if (119 == s[i + 1])
                    {
                        s[i] = 50;
                        s.erase(i + 1, 2);
                    }

                    else if (104 == s[i + 1])
                    {
                        s[i] = 51;
                        s.erase(i + 1, 4);
                    }

                    break;
                case 102:
                    if (111 == s[i + 1])
                    {
                        s[i] = 52;
                        s.erase(i + 1, 3);
                    }

                    else if (105 == s[i + 1])
                    {
                        s[i] = 53;
                        s.erase(i + 1, 3);
                    }
                    break;
                case 115:
                    if (105 == s[i + 1])
                    {
                        s[i] = 54;
                        s.erase(i + 1, 2);
                    }

                    else if (101 == s[i + 1])
                    {
                        s[i] = 55;
                        s.erase(i+1, 4);
                    }
                    break;
                }
            }
            ++i;
            if (i >= static_cast<__int64>(s.size()) - 1)
            {
                break;
            }
        }
           
        int Count = 1;
        for (int i = s[s.size() - 1]; i >= 0; --i)
        {
            answer = s[i] * Count;
            Count *= 10;
        }
        return answer;
    }

int main()
{
    solution("one4seveneight");
}