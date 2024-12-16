#include<iostream>
using namespace std;
class Point
{
private: 
	int x, y;
public:
	Point(int X=60, int Y=80)
	{
		x = X;
		y = Y;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "X:" << x << "\t" << "Y:" << y << endl;
	}
};
//int main()
//{
//	Point p1;
//	p1.display();
//	p1.setPoint(20, 20);
//	p1.display();
//}