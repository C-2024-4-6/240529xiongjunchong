//}#include <iostream>
//#include <cctype>  // 用于字符类型判断的头文件
//void main() {
//    char c;
//    int letterCount = 0;  // 字母计数
//    int digitCount = 0;   // 数字计数
//    int spaceCount = 0;   // 空格计数
//    int otherCount = 0;   // 其他字符计数
//    std::cout << "请开始输入字符，按回车换行结束输入：" << std::endl;
//    // 使用 `cin.get` 可以读取包括空格和换行符在内的所有字符
//    while ((c = std::cin.get()) != '\n') {
//        if (isalpha(c)) {
//            letterCount++;
//        }
//        else if (isdigit(c)) {
//            digitCount++;
//        }
//        else if (c == ' ') {
//            spaceCount++;
//        }
//        else {
//            otherCount++;
//        }
//    }
//
//    std::cout << "字母的个数：" << letterCount << std::endl;
//    std::cout << "数字的个数：" << digitCount << std::endl;
//    std::cout << "空格的个数：" << spaceCount << std::endl;
//    std::cout << "其他字符的个数：" << otherCount << std::endl;
//
//}
