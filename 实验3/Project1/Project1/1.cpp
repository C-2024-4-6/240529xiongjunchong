#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	Time(int hour, int minute, int sec)
	{
		this->hour = hour;
		this->minute = minute;
		this->sec = sec;
	}
	void show()
	{
		cout << hour <<":" << minute <<":" << sec << endl;
	}
};
//int main()
//{
//	Time t1(21,00,00);           //定义t1为Time类对象
//	t1.show();
//	return 0;
//}