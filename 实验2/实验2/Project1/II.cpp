//#include<iostream>
//void swap(double& refa, double& refb)
//{
//	int t;
//	t = refa;
//	refa = refb;
//	refb = t;
//}
//int main()
//{
//	const int num = 10;
//	double a[num];
//	for (int i = 0; i < num; i++)
//	{
//		std::cin >> a[i];
//	}
//	bool changed = true;
//	do
//	{
//		changed = false;
//		for (int j = 0; j < (num-1); j++)
//			if (a[j] > a[j + 1])
//			{
//				swap(a[j], a[j + 1]);
//				changed = true;
//			}
//	} while (changed);
//	for (int i = 0; i < num; i++)
//	{
//		std::cout<< a[i]<<",";
//	}
//}