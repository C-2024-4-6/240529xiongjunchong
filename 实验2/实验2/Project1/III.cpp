//#include <iostream>
//
//int main() 
//{
//    bool lockers[100] = { false };
//    for (int student = 1; student <= 100; student++) 
//    {
//        for (int locker = student - 1; locker < 100; locker += student) 
//        {
//            lockers[locker] = !lockers[locker];
//        }
//    }
//    std::cout << "���ŵĴ�������Ϊ��";
//    for (int i = 0; i < 100; i++) 
//    {
//        if (lockers[i]) 
//        {
//            std::cout << (i + 1) << " ";
//        }
//    }
//    std::cout << std::endl;
//    return 0;
//}