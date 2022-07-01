//
//���� ����
//2016�� 1�� 1���� �ݿ����Դϴ�. 2016�� a�� b���� ���� �����ϱ�� ? �� �� a, b�� �Է¹޾� 2016�� a�� b���� ���� �������� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.
// ������ �̸��� �Ͽ��Ϻ��� ����ϱ��� ���� SUN, MON, TUE, WED, THU, FRI, SAT
//
//�Դϴ�.���� ��� a = 5, b = 24��� 5�� 24���� ȭ�����̹Ƿ� ���ڿ� "TUE"�� ��ȯ�ϼ���.
//
//���� ����
// 31��  1,3,5,7,8,10,12 28�� 2 30�� 4,6,9, 11
//2016���� �����Դϴ�.
//2016�� a�� b���� ������ �ִ� ���Դϴ�. (13�� 26���̳� 2�� 45�ϰ��� ��¥�� �־����� �ʽ��ϴ�)
#include <string>
#include <vector>


using namespace std;

string solution(int a, int b)
{
    string answer = "";
    int days = 0;


    for (int i = 1; i < a; ++i)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
        {
            days += 31;
        }
        else if (i == 2)
        {
            days += 29;
        }

        else
        {
            days += 30;
        }
    }

    days = days + b;

    days = days % 7 + 1;

    switch (days)
    {

    case 1:
        answer = "THU";
        break;
    case 2:
        answer = "FRI";
        break;
    case 3:
        answer = "SAT";
        break;
    case 4:
        answer = "SUN";
        break;
    case 5:
        answer = "MON";
        break;
    case 6:
        answer = "TUE";
        break;
    case 7:
        answer = "WED";
        break;

    }


    return answer;

}

int main()
{
    solution(5, 24);
  }