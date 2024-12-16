#include<iostream>
using namespace std;
class Student
{
public:
	Student(int num, int score)
	{
		this->num = num;
		this->score = score;
	}
	int num;
	int score;
};
void max(Student *students[], int size) 
{
	if (size == 0) 
	{
		cout << "没有学生数据" << endl;
		return;
	}
	Student* maxStudent = students[0];
	for (int i = 0; i < size; i++)
	{
		if (students[i]->score > maxStudent->score)
		{
			maxStudent = students[i];
		}
	}
	cout << "最高成绩者的学号是: " << maxStudent->num << endl;
}

int main()
{
	Student Class[5] =
	{
		Student(1,80),
		Student(2,70),
		Student(3,90),
		Student(4,85),
		Student(5,95)
	};
	Student* AClass[5];
	for (int i = 0; i < 5; i++)
	{
		AClass[i] = &Class[i];
	}
	max(AClass, 5);
}