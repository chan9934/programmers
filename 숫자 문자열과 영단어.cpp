////�׿��� ���ε��� ���ڳ��̸� �ϰ� �ֽ��ϴ�.�׿��� ���ε����� ���ڸ� �ǳ� �� �Ϻ� �ڸ����� ���ܾ�� �ٲ� ī�带 �ǳ��ָ� ���ε��� ���� ���ڸ� ã�� �����Դϴ�.
////
////������ ������ �Ϻ� �ڸ����� ���ܾ�� �ٲٴ� �����Դϴ�.
////
////1478 �� "one4seveneight"
////234567 �� "23four5six7"
////10203 �� "1zerotwozero3"
////�̷��� ������ �Ϻ� �ڸ����� ���ܾ�� �ٲ�����ų�, Ȥ�� �ٲ��� �ʰ� �״���� ���ڿ� s�� �Ű������� �־����ϴ�.s�� �ǹ��ϴ� ���� ���ڸ� return �ϵ��� solution �Լ��� �ϼ����ּ���.
////
////����� �� ���ڿ� �����Ǵ� ���ܾ�� ���� ǥ�� �����ϴ�.
////
////����	���ܾ�
////0	zero
////1	one
////2	two
////3	three
////4	four
////5	five
////6	six
////7	seven
////8	eight
////9	nine
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

enum Number
{
	zero,	
	one	,	
	two		,
	three	,
	four	,
	five	,
	six		,
	seven	,
	eight	,
	nine	
};

int solution(string a)
{
	int answer = 0;
	return answer;

	for (int i = 0; i < a.size(); ++i)
	{
		if (65 <= a[i])
		{
			for (int j = i; j < a.size(); ++j)
			{
				if (a[j] < 65)
				{
					a.substr(i, j-1)
					break;

				}

				
			}

		}
	}

}