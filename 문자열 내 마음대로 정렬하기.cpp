//���� ����
//���ڿ��� ������ ����Ʈ strings��, ���� n�� �־����� ��, �� ���ڿ��� �ε��� n��° ���ڸ� �������� �������� �����Ϸ� �մϴ�.
// ���� ��� strings��["sun", "bed", "car"]�̰� n�� 1�̸� �� �ܾ��� �ε��� 1�� ���� "u", "e", "a"�� strings�� �����մϴ�.
//
//���� ����
//strings�� ���� 1 �̻�, 50������ �迭�Դϴ�.
//strings�� ���Ҵ� �ҹ��� ���ĺ����� �̷���� �ֽ��ϴ�.
//strings�� ���Ҵ� ���� 1 �̻�, 100������ ���ڿ��Դϴ�.
//��� strings�� ������ ���̴� n���� Ů�ϴ�.
//�ε��� 1�� ���ڰ� ���� ���ڿ��� ���� �� ���, ���������� �ռ� ���ڿ��� ���ʿ� ��ġ�մϴ�.
//����� ��
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