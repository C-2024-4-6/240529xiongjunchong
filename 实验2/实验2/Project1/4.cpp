//#include "mytriangle.h"
//
//int main() {
//    double side1, side2, side3;
//
//    std::cout << "请输入三角形第一条边的长度：";
//    std::cin >> side1;
//
//    std::cout << "请输入三角形第二条边的长度：";
//    std::cin >> side2;
//
//    std::cout << "请输入三角形第三条边的长度：";
//    std::cin >> side3;
//
//    if (is_valid(side1, side2, side3)) {
//        double triangle_area = area(side1, side2, side3);
//        std::cout << "该三角形的面积为：" << triangle_area << std::endl;
//    }
//    else {
//        std::cout << "输入的三条边不能构成三角形，请重新输入。" << std::endl;
//    }
//
//    return 0;
//}