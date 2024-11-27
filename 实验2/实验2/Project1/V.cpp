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
//    std::cout << "请输入第一个字符串：";
//    std::cin.getline(s1, 100);
//
//    std::cout << "请输入第二个字符串：";
//    std::cin.getline(s2, 100);
//
//    int result = indexOf(s1, s2);
//
//    if (result != -1) {
//        std::cout << s1 << " 是 " << s2 << " 的子串，在 " << s2 << " 中的下标为：" << result << std::endl;
//    }
//    else {
//        std::cout << s1 << " 不是 " << s2 << " 的子串。" << std::endl;
//    }
//
//    return 0;
//}