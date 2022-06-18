#include <iostream>

using namespace std;


int main()
{
	int a{ 0 };
	int b{ 0 };

	for (int i{ 0 }; i < 5; ++i)
	{
		if (i <= 2)
		{
			a = 5 - i;
			b = 1 + 2 * i;

			cout.width(a);

			for (int j{ 0 }; j < b; ++j)
			{
				cout << "*";
			}
			cout << endl;
		}
		else
		{
			a = 1 + i;
			b = 9 - 2 * i;
			cout.width(a);

			for (int j{ 0 }; j < b; ++j)
			{
				cout << "*";
			}
			cout << endl;
		}

	

		
	}

	


}