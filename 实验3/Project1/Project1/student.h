#pragma once
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(int n,const char na[20],const char s)
	{
		num = n;
		for (int i = 0; i < 20; i++)
		{
			name[i] = na[i];
		}
		sex = s;
	}
private:
	int num;
	char name[20];
	char sex;
};