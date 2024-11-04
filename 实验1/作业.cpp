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
//	cout << "输入底面半径" << endl;
//	cin >> r;
//	cout << "输入高" << endl;
//	cin >> h;
//	cout << "圆锥体积为" << (pi * r * r * h) / 3;
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
//	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:
//	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
//	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
//	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
//	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
//	cout << "output in Oct unsigned int type:" << oct << testUnint << endl; //8进制输出
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
//	cout << "请输入华氏温度" << endl;
//	cin >> f;
//	c = (f - 32) * 5.0 / 9.0;
//	cout << fixed << setprecision(2);
//	cout << "对应的摄氏温度为：" << c << "℃" << endl;
//}
//#include<iostream>
//#include<cctype>
//using namespace std;
//int main()
//{
//	char ch;
//	cout << "请输入一个字母" << endl;
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
//	cout << "输入x" << endl;
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
//	cout << "请输入三角形三条边" << endl;
//	cin >> a >> b >> c;
//	if ((a + b > c) && (a + c > b) && (b + c > a))
//	{
//		if ((abs(a - b) < c) && (abs(a - c) < b) && (abs(b - c) < a))
//		{
//			cout << "周长为" << a + b + c;
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
//	cout << "输入第一个数字" << endl;
//	cin >> a;
//	cout << "输入运算符" << endl;
//	cin >> suan;
//	cout << "输入第二个数字" << endl;
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
//		cout << "非法运算符，请重新输入。" << endl;
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
//	cout << "输入第一个数字" << endl;
//	cin >> a;
//	cout << "输入运算符" << endl;
//	cin >> suan;
//	cout << "输入第二个数字" << endl;
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
//		cout << "非法运算符，请重新输入。" << endl;
//		return 0;
//	}
//	cout << c;
//}#include <iostream>
//#include <cctype>  // 用于字符类型判断的头文件
//void main() {
//    char c;
//    int letterCount = 0;  // 字母计数
//    int digitCount = 0;   // 数字计数
//    int spaceCount = 0;   // 空格计数
//    int otherCount = 0;   // 其他字符计数
//    std::cout << "请开始输入字符，按回车换行结束输入：" << std::endl;
//    // 使用 `cin.get` 可以读取包括空格和换行符在内的所有字符
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
//    std::cout << "字母的个数：" << letterCount << std::endl;
//    std::cout << "数字的个数：" << digitCount << std::endl;
//    std::cout << "空格的个数：" << spaceCount << std::endl;
//    std::cout << "其他字符的个数：" << otherCount << std::endl;
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
//	cout << "输入两个数" << endl;
//	int a, b;
//	cin >> a>> b;
//	cout << "最大公约数" << gys(a, b);
//	cout << "最小公倍数" << gbs(a, b);
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