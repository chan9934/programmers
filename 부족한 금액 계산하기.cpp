//���� ����
//���� ���� ���̱ⱸ�� �αⰡ �ſ� ���� ���� ������ �ʽ��ϴ�.
//�� ���̱ⱸ�� ���� �̿��� price�� �ε�, ���̱ⱸ�� N �� ° �̿��Ѵٸ� ���� �̿���� N�踦 �ޱ�� �Ͽ����ϴ�.
//��, ó�� �̿�ᰡ 100�̾��ٸ� 2��°���� 200, 3��°���� 300���� ����� �λ�˴ϴ�.
//���̱ⱸ�� count�� Ÿ�� �Ǹ� ���� �ڽ��� ������ �ִ� �ݾ׿��� �󸶰� ���ڶ������ return �ϵ��� solution �Լ��� �ϼ��ϼ���.
//��, �ݾ��� �������� ������ 0�� return �ϼ���.
//
//���ѻ���
//���̱ⱸ�� �̿�� price : 1 �� price �� 2,500, price�� �ڿ���
//ó�� ������ �ִ� �ݾ� money : 1 �� money �� 1,000, 000, 000, money�� �ڿ���
//���̱ⱸ�� �̿� Ƚ�� count : 1 �� count �� 2,500, count�� �ڿ���

using namespace std;

long long solution(int price, int money, int count)
{
    long long  answer = -1;
    long long  countmoney = 0;
    long long  lastmoney = 0;
    for (int i = 0; i < count; ++i)
    {
        countmoney = price * (i + 1);   
        lastmoney += countmoney;
        
    }
    if (lastmoney > money)
    {
        answer = lastmoney - money;
    }
    else
    {
        return -0;
    }
    
   

    return answer;
}