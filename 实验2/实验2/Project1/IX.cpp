//#include<iostream>
//void swap(int& refa, int& refb)
//{
//	int t;
//	t = refa;
//	refa = refb;
//	refb = t;
//}
//int main()
//{
//	int i; 
//	std::cout << "数组元素个数：" << std::endl;
//	std::cin >> i;
//	int* ptr = new int[i];
//	for (int j = 0; j < i; j++)
//	{
//		std::cin >> ptr[j];
//	}
//	bool changed = true;
//	do
//	{
//		changed = false;
//		for (int j = 0; j < (i - 1); j++)
//			if (ptr[j] > ptr[j + 1])
//			{
//				swap(ptr[j], ptr[j + 1]);
//				changed = true;
//			}
//	} 
//	while (changed);
//	for (int j = 0; j < i; j++)
//	{
//		std::cout << ptr[j] << ",";
//	}
//	delete[] ptr;
//}