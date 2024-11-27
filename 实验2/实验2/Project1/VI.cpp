//#include<iostream>
//#include <cstring>
//#include <string>
//void count(const char s[], int counts[])
//{
//	int a = strlen(s);
//	for (int i = 0; i < a; i++)
//	{
//		for (int m = 65; m < 90; m++)
//		{
//			if ((s[i] == m) || (s[i] == (m + 32)))
//			{
//				counts[m - 65 ]++;
//				break;
//			}
//			else if (s[i] == 0)
//			{
//				continue;
//			}
//			else
//			{
//				continue;
//			}
//		}
//	}
//}
//
//int main()
//{
//	std::string s;
//	std::getline(std::cin, s);
//	int alpha[26];
//	int counts[26] = { 0 };
//	const char* ss = s.c_str();
//	for (int i = 0; i < 26; i++)
//	{
//		alpha[i] = 65 + i;
//	}
//	count(ss, counts);
//	for (int i = 0; i < 26; i++)
//	{
//		std::cout << char(alpha[i]) <<"га" << counts[i]<<"Иі"<<std::endl;
//	}
//}