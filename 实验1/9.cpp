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
//	}
//	cout << c;
//}