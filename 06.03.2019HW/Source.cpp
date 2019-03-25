#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<locale.h>

using namespace std;

///////////////////2///////////2/
void zamena(char *s, char ch, char ch2)
{
	for (size_t i = 0; i < strlen(s); i++)
	{
		if (s[i] == ch)
		{
			s[i] = ch2;
		}

	}

}

int main()
{
	setlocale(LC_ALL, "");

	char s1[50];
	char ch, ch2;

	char *p;

	cin.getline(s1, 50);
	p = s1;

	cin >> ch >> ch2;

	zamena(p, ch, ch2);

	cout << p << endl;

	system("pause");
	return 0;
}

//////////1////////////////1///////////
//char* slovo(char* s1, char* s2)
//{
//	char *p1 = s1;
//	char *p2 = s2;
//	int flag = 0;
//	int k = 0;
//
//	while (*s1++ != NULL)
//	{
//
//		p1 = s1;
//		p2 = s2;
//		if (*p1 == *p2)
//		{
//			for (size_t i = 1; i < strlen(s2); i++)
//			{
//				if (s1[i] == s2[i])
//				{
//					k++;
//				}
//				if (k == (strlen(s2) - 1))
//				{
//					return p1;
//				}
//
//			}
//
//		}
//
//	}
//	return 0;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "");
//
//	char s1[50];
//	char s2[20];
//
//	char *p1;
//	char *p2;
//
//	cin.getline(s1, 50);
//	cin.getline(s2, 20);
//
//	p1 = s1;
//	p2 = s2;
//
//
//
//	cout << slovo(p1, p2) << endl;
//
//
//	system("pause");
//	return 0;
//}