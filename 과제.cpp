//위의 코드에서 <iostream> 라이브러리만 사용해서 charPtr 가 가르키고 있는 배열의 길이를 구하세요
//(단, sizeof(CharArr) / sizeof(char) 방법은 제외)
#include <iostream>

using namespace std;

int main()
{
	char* charPtr;
	char charArr[15] = "HAHAHAHAHAHAHA";
	int i = 0;

	charPtr = charArr;
	while (1)
	{
		if (*(charPtr + i) != NULL)
		{
			++i;
		}

		else
		{
			break;
		}
	}

	cout << i << endl;
}