//���� �ڵ忡�� <iostream> ���̺귯���� ����ؼ� charPtr �� ����Ű�� �ִ� �迭�� ���̸� ���ϼ���
//(��, sizeof(CharArr) / sizeof(char) ����� ����)
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