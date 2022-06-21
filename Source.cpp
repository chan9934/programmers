#include <iostream>
#include <vector>


using namespace std;

//int main()
//{
//	
//	int a[3] = { 1, 2, 3 };
//	int b[3] = { 0 };
//	
//	while (1)
//	{
//		int Q = 0;
//		int S = 0;
//		int B = Q - S;
//		int O = 3 - S - B;
//		cin >> b[0] >> b[1] >> b[2];
//
//
//		system("cls");
//		for (int i = 0; i < 3; ++i)
//		{
//			for (int j = 0; j < 3; ++j)
//			{
//				a[i] == b[j] ? ++Q : Q;
//
//			}
//			a[i] == b[i] ? ++S : S;
//			
//		}
//		if (Q - S == 0)
//		{
//			cout << S << "S";
//
//			if (S == 3)
//			{
//				break;
//			}
//		}
//
//		else if (S == 0)
//		{
//			cout << Q - S << "B";
//		}
//		else 		
//		{
//			
//			cout << S << "S" << Q - S << "B";
//		}
//
//	}
//}

int main()
{
	vector<int> random = { 12, 42, 34, 2, 324, 43, 22, 78, 5, 67, 775, 6, 66, 54, 8, 8, 668, 33 };

	for (int i = 0; i < random.size(); ++i)
	{
		for (int j = 0; j < random.size(); ++j)
		{
			if (random[i] < random[j])
			{
				int temp = random[i];
				random[i] = random[j];
				random[j] = temp;
			}
			else
			{
				continue;
			}
		}


	}

	for (int i = 0; i < random.size(); ++i)
	{
		cout << random[i] << "   ";
	}
}