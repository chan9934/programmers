//���� ����
//������ ���� ���� n�� ����, n�� � ���� ���� x�� �������� �ƴ��� �Ǵ��Ϸ� �մϴ�.
//n�� ���� ���� x�� �����̶�� x + 1�� ������ �����ϰ�, n�� ���� ���� x�� ������ �ƴ϶�� - 1�� �����ϴ� �Լ��� �ϼ��ϼ���.
//
//���� ����
//n�� 1�̻�, 50000000000000 ������ ���� �����Դϴ�.
#include <string>
#include <vector>
#include <iostream>
#include <cmath>



using namespace std;

long long solution(long long n) 
{
    vector<long long> x;
    long long answer = 0;
  
    double A = sqrt(static_cast <float> (n));
   
    if (n == A * A)
    {
        return (sqrt(n) -1) * (sqrt(n) - 1);
    }
    else
        return -1;

    return answer;
}
        /*A[i] A[i - 1] = A[i-1] + 2 * i + 1;*/
 
int main()
{
    long long a = 3;
    cout << solution(a);

}