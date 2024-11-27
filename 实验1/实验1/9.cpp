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
//	}
//	cout << c;
//}