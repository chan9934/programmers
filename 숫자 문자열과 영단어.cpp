//�׿��� ���ε��� ���ڳ��̸� �ϰ� �ֽ��ϴ�.�׿��� ���ε����� ���ڸ� �ǳ� �� �Ϻ� �ڸ����� ���ܾ�� �ٲ� ī�带 �ǳ��ָ� ���ε��� ���� ���ڸ� ã�� �����Դϴ�.
//
//������ ������ �Ϻ� �ڸ����� ���ܾ�� �ٲٴ� �����Դϴ�.
//
//1478 �� "one4seveneight"
//234567 �� "23four5six7"
//10203 �� "1zerotwozero3"
//�̷��� ������ �Ϻ� �ڸ����� ���ܾ�� �ٲ�����ų�, Ȥ�� �ٲ��� �ʰ� �״���� ���ڿ� s�� �Ű������� �־����ϴ�.s�� �ǹ��ϴ� ���� ���ڸ� return �ϵ��� solution �Լ��� �ϼ����ּ���.
//
//����� �� ���ڿ� �����Ǵ� ���ܾ�� ���� ǥ�� �����ϴ�.
//
//����	���ܾ�
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