#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
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
//	Time t1(21,00,00);           //����t1ΪTime�����
//	t1.show();
//	return 0;
//}