//#include<iostream>
//using namespace std;
//bool is_prime(int num)
//{
//	for (int i= num-1; i>1; i--)
//	{
//		if (num % i == 0)
//		{
//			return 0;
//		}
//		
//	}
//	return 1;
//}
//int main()
//{
//	int a[200];
//	int n = 1;
//	for (int i = 2; n<201; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			a[n-1] = i;
//			n++;
//		}
//		else
//		{
//			continue;
//		}
//	}
//	for (int i = 0; i < 200; i++)
//	{
//		if ((i+1) % 10 == 0)
//		{
//			cout << a[i] << endl;
//		}
//		else
//		{
//			cout << a[i]<<"\t";
//		}
//	}
//}
