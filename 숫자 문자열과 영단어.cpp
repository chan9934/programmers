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

//#define "zero" = '1';
//
//
//enum Number
//{
//	"zero" = '1',
//	one	,	
//	two	,
//	three,
//	four,
//	five,
//	six	,
//	seven,
//	eight,
//	nine	
//};

string substitute(string a)
{
	if ("zero" == a)
	{
		a = '0';
	}
	else if ("one" == a)
	{
		a = '1';
	}
	else if ("two" == a)
	{
		a = '2';
	}
	else if ("three" == a)
	{
		a = '3';
	}
	else if ("four" == a)
	{
		a = '4';
	}
	else if ("five" == a)
	{
		a = '5';
	}
	else if ("six" == a)
	{
		a = '6';
	}
	else if ("seven" == a)
	{
		a = '7';
	}
	else if ("eight" == a)
	{
		a = '8';
	}
	else if ("nine" == a)
	{
		a = '9';
	}

	else
	{
		return a;
	}

	return a;
}

int solution(string a)
{

	int answer = 0;
	
	string result = "";
	string b = "";

	for (int i = 0; i < a.size(); ++i)
	{
		
		if (65 <= a[i])
		{	
			b.push_back(a[i]);
			if (b != substitute(b))
			{
				result = result + substitute(b);
				b = "";
			}
		}
		else
			result.push_back(a[i]);
	}
	answer = stoi(result);
	return answer;

}

int main()
{
	string a = "one2three";
	cout << solution(a);
}