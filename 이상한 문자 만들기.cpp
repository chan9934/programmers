//�̻��� ���� �����
//���� ����
//���ڿ� s�� �� �� �̻��� �ܾ�� �����Ǿ� �ֽ��ϴ�.�� �ܾ�� �ϳ� �̻��� ���鹮�ڷ� ���еǾ� �ֽ��ϴ�.�� �ܾ��� ¦����° ���ĺ��� �빮�ڷ�, 
//Ȧ����° ���ĺ��� �ҹ��ڷ� �ٲ� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.
//
//���� ����
//���ڿ� ��ü�� ¦ / Ȧ�� �ε����� �ƴ϶�, �ܾ�(������ ����)���� ¦ / Ȧ�� �ε����� �Ǵ��ؾ��մϴ�.
//ù ��° ���ڴ� 0��° �ε����� ���� ¦����° ���ĺ����� ó���ؾ� �մϴ�.

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