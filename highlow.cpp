#include <iostream>

/*
1. 52���� ī�带 ������ ����
2. ������ ���۵Ǹ� ī�� �ϳ��� ����
3. �÷��̾�� ����ī�尡
���µ� ī�庸�� ���� ī������
���� ī�������� ���Ͽ� ������ �Ѵ�
4. ���� �´ٸ� �¸� Ʋ���� �й�
5. ī��� 1�� ���� ���� K�� ���� ����
6. ������ ������Ʈ > ���̾� > ��Ʈ > Ŭ�ι�
������ ����.
*/

using namespace std;

enum CardMark
{
	Clover = 0,
	Heart,
	Dia,
	Spade

};

struct stCard
{
	CardMark mark;
	int number;
};

void main()
{
	stCard card[52];
	int a = 0;

	
	

	
	
	for (int i = 0; i <= 52; ++i)
	{
		switch (i / 13)
		{
		case 0:
			card[i].mark = Clover;
			break;

		case 1:
			card[i].mark = Heart;
			break;
		case 2:
			card[i].mark = Dia;
			break;
		case 3:
			card[i].mark = Spade;
			break;


		}
		card[i].number = (i % 13) + 1 ;

		

	}

	srand((unsigned int)time(NULL)); //srand(time) - �Ź� �ٲ�� �ð��� �־���

	for (int i = 0; i < 52; i++)
	{
		int FirstNumber = rand() % 52;//Rand srand�� ���� ���� ȣ ��
		int SecondNumber = rand() % 52;

		stCard Temp = card[FirstNumber];
		card[FirstNumber] = card[SecondNumber];
		card[SecondNumber] = Temp;
	}

	for (int i = 0; i < 52; ++i)
	{
		cout << i << "Mark = " << card[i].mark << " Number = " << card[i].number << endl;
	}
}
