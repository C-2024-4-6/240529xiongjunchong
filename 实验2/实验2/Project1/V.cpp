//#include<iostream>
//#include <cstring>
//int indexOf(const char s1[], const char s2[]) {
//    int s1Len = strlen(s1);
//    int s2Len = strlen(s2);
//
//    for (int i = 0; i <= s2Len - s1Len; i++) {
//        int j;
//        for (j = 0; j < s1Len; j++) {
//            if (s2[i + j] != s1[j]) {
//                break;
//            }
//        }
//        if (j == s1Len) {
//            return i;
//        }
//    }
//
//    return -1;
//}
//int main() {
//    char s1[100];
//    char s2[100];
//
//    std::cout << "�������һ���ַ�����";
//    std::cin.getline(s1, 100);
//
//    std::cout << "������ڶ����ַ�����";
//    std::cin.getline(s2, 100);
//
//    int result = indexOf(s1, s2);
//
//    if (result != -1) {
//        std::cout << s1 << " �� " << s2 << " ���Ӵ����� " << s2 << " �е��±�Ϊ��" << result << std::endl;
//    }
//    else {
//        std::cout << s1 << " ���� " << s2 << " ���Ӵ���" << std::endl;
//    }
//
//    return 0;
//}