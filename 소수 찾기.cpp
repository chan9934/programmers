//���� ����
//1���� �Է¹��� ���� n ���̿� �ִ� �Ҽ��� ������ ��ȯ�ϴ� �Լ�, solution�� ����� ������.
//
//�Ҽ��� 1�� �ڱ� �ڽ����θ� ���������� ���� �ǹ��մϴ�.
//(1�� �Ҽ��� �ƴմϴ�.)
//
//���� ����
//n�� 2�̻� 1000000������ �ڿ����Դϴ�.

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) 
{
    int answer = 0;
   
  
     int count = 1;
     
     if (n > 11)
     {

         for (int i = 3; i <= n; i += 2)
         {

             for (int j = 2; j <= i; ++j)
             {
                 if (j == i)
                 {
                     ++count;
                     break;
                 }
                 else if (i % j == 0)
                 {

                     break;
                 }


             }

         }
     }
     for (int i = 3; i <= n; i += 2)
     {

         for (int j = 2; j <= i; ++j)
         {
             if (j == i)
             {
                 ++count;
                 break;
             }
             else if (i % j == 0)
             {

                 break;
             }


         }

     }
        
    
    return count;
}

int main()
{
    
   cout << solution(399999  );
}