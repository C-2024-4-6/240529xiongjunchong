//#include<iostream>
//using namespace std;
//int main()
//{
//	int i = 1;
//	cout << i++ << endl;
//	cout << i++ << endl;
//	cout << "Welcome to C++" << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	const float pi = 3.14;
//	int r, h;
//	cout << "�������뾶" << endl;
//	cin >> r;
//	cout << "�����" << endl;
//	cin >> h;
//	cout << "Բ׶���Ϊ" << (pi * r * r * h) / 3;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "char length:" << sizeof(char) << endl;
//	cout << "int length:" << sizeof(int) << endl;
//	cout << "bool length:" << sizeof(bool) << endl;
//	cout << "short length:" << sizeof(short) << endl;
//	cout << "long length:" << sizeof(long) << endl;
//	cout << "float length:" << sizeof(float) << endl;
//	cout << "double length:" << sizeof(double) << endl;
//	cout << "long double length:" << sizeof(long double) << endl;
//}
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	unsigned int testUnint = 65534;//oxfffe
//	cout << "output in unsigned int 1 type:"" << testUnint<< end;//<<oct";
//	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
//	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//Ϊʲô���Ϊ-2?:
//	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
//	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
//	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
//	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16�������
//	cout << "output in Oct unsigned int type:" << oct << testUnint << endl; //8�������
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	double f;
//	double c;
//	cout << "�����뻪���¶�" << endl;
//	cin >> f;
//	c = (f - 32) * 5.0 / 9.0;
//	cout << fixed << setprecision(2);
//	cout << "��Ӧ�������¶�Ϊ��" << c << "��" << endl;
//}
//#include<iostream>
//#include<cctype>
//using namespace std;
//int main()
//{
//	char ch;
//	cout << "������һ����ĸ" << endl;
//	cin >> ch;
//	if (islower(ch))
//	{
//		ch = toupper(ch);
//		cout << ch;
//	}
//	else
//	{
//		cout << static_cast<int>(ch + 1);
//	}
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	double x;
//	double y;
//	cout << "����x" << endl;
//	cin>> x;
//	if ((x > 0) && (x < 1))
//	{
//		y = 3 - 2*x;
//		cout << y;
//	}
//	else if ((x>0)&&(x < 5))
//	{
//		y = 2 / (4 * x) + 1;
//		cout << y;
//	}
//	else if ((x>0)&&(x < 10))
//	{
//		y = x * x;
//		cout << y;
//	}
//	else
//	{
//		y = 0;
//		cout << "error";
//	}
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	cout << "������������������" << endl;
//	cin >> a >> b >> c;
//	if ((a + b > c) && (a + c > b) && (b + c > a))
//	{
//		if ((abs(a - b) < c) && (abs(a - c) < b) && (abs(b - c) < a))
//		{
//			cout << "�ܳ�Ϊ" << a + b + c;
//		}
//		else
//		{
//			cout << "error";
//		}
//	}
//	else
//	{
//		cout << "error";
//	}
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 0, b = 0;
//	char suan;
//	cout << "�����һ������" << endl;
//	cin >> a;
//	cout << "���������" << endl;
//	cin >> suan;
//	cout << "����ڶ�������" << endl;
//	cin >> b;
//	double c = 0;
//	switch (suan)
//	{
//	case '+':
//		c = a + b;
//		break;
//	case'-':
//		c = a - b;
//		break;
//	case'*':
//		c = a * b;
//		break;
//	case'/':
//		if (b == 0)
//		{
//			cout << "error" << endl;
//		}
//		c = a / b;
//		break;
//	case '%':
//		if (b == 0) {
//			cout << "erro" << endl;
//			return 0;
//		}
//		if (!((int)a == a && (int)b == b))
//		{
//			cout << "error" << endl;
//			return 0;
//		}
//		c = (int)a % (int)b;
//		break;
//	default:
//		cout << "�Ƿ�����������������롣" << endl;
//		return 0;
//	}
//	cout << c;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 0, b = 0;
//	char suan;
//	cout << "�����һ������" << endl;
//	cin >> a;
//	cout << "���������" << endl;
//	cin >> suan;
//	cout << "����ڶ�������" << endl;
//	cin >> b;
//	double c = 0;
//	switch (suan)
//	{
//	case '+':
//		c = a + b;
//		break;
//	case'-':
//		c = a - b;
//		break;
//	case'*':
//		c = a * b;
//		break;
//	case'/':
//		if (b == 0)
//		{
//			cout << "error" << endl;
//		}
//		c = a / b;
//		break;
//	case '%':
//		if (b == 0) {
//			cout << "erro" << endl;
//			return 0;
//		}
//		if (!((int)a == a && (int)b == b))
//		{
//			cout << "error" << endl;
//			return 0;
//		}
//		c = (int)a % (int)b;
//		break;
//	default:
//		cout << "�Ƿ�����������������롣" << endl;
//		return 0;
//	}
//	cout << c;
//}#include <iostream>
//#include <cctype>  // �����ַ������жϵ�ͷ�ļ�
//void main() {
//    char c;
//    int letterCount = 0;  // ��ĸ����
//    int digitCount = 0;   // ���ּ���
//    int spaceCount = 0;   // �ո����
//    int otherCount = 0;   // �����ַ�����
//    std::cout << "�뿪ʼ�����ַ������س����н������룺" << std::endl;
//    // ʹ�� `cin.get` ���Զ�ȡ�����ո�ͻ��з����ڵ������ַ�
//    while ((c = std::cin.get()) != '\n') {
//        if (isalpha(c)) {
//            letterCount++;
//        }
//        else if (isdigit(c)) {
//            digitCount++;
//        }
//        else if (c == ' ') {
//            spaceCount++;
//        }
//        else {
//            otherCount++;
//        }
//    }
//
//    std::cout << "��ĸ�ĸ�����" << letterCount << std::endl;
//    std::cout << "���ֵĸ�����" << digitCount << std::endl;
//    std::cout << "�ո�ĸ�����" << spaceCount << std::endl;
//    std::cout << "�����ַ��ĸ�����" << otherCount << std::endl;
//
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int gys(int a, int b)
//{
//	while (b != 0)
//	{
//		int temp = b;
//		b = a % b;
//		a = temp;
//	}
//	return a;
//}
//int gbs(int a, int b)
//{
//	return (a * b) / gys(a, b);
//}
//int main()
//{
//	cout << "����������" << endl;
//	int a, b;
//	cin >> a>> b;
//	cout << "���Լ��" << gys(a, b);
//	cout << "��С������" << gbs(a, b);
//
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//    for (int i = 1; i <= 5; i++) {
//        for (int j = 0; j < i; j++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	const float dan = 0.8;
	int m = 0;
	int sum = 0;
	for (int i = 2; i < 100; i = i * 2)
	{
		m++;
		sum = i * m * dan + sum;
	}
	cout << "average" << sum / m << endl;
}