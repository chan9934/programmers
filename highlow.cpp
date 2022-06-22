#include <iostream>

/*
1. 52개의 카드를 가지고 시작
2. 게임이 시작되면 카드 하나를 오픈
3. 플레이어는 다음카드가
오픈된 카드보다 높은 카드인지
낮은 카드인지에 대하여 배팅을 한다
4. 선택 맞다면 승리 틀리면 패배
5. 카드는 1이 가장 낮고 K가 가장 높다
6. 문양은 스페이트 > 다이아 > 하트 > 클로버
순으로 높다.
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

	srand((unsigned int)time(NULL)); //srand(time) - 매번 바뀌는 시간을 넣어줌

	for (int i = 0; i < 52; i++)
	{
		int FirstNumber = rand() % 52;//Rand srand로 나온 값을 호 출
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
