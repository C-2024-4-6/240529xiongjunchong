#include<iostream>
void merge(int size1, const int list1[], int size2, const int list2[], int list3[])
{
    int i = 0, j = 0, k = 0;
    while (k < size1 + size2)
    {
        if (i < size1 && (j >= size2 || list1[i] < list2[j]))
        {
            list3[k] = list1[i];
            i++;
        }
        else
        {
            list3[k] = list2[j];
            j++;
        }
        k++;
    }
}
int main() {
    const int MAX_SIZE = 80;
    int list1[MAX_SIZE], list2[MAX_SIZE], list3[MAX_SIZE * 2];
    int size1, size2;
    std::cout << "�����һ�������������Ԫ�ظ�����";
    std::cin >> size1;
    std::cout << "�����һ�������������Ԫ�أ�";
    for (int i = 0; i < size1; i++) {
        std::cin >> list1[i];
    }
    std::cout << "����ڶ��������������Ԫ�ظ�����";
    std::cin >> size2;
    std::cout << "����ڶ��������������Ԫ�أ�";
    for (int i = 0; i < size2; i++) {
        std::cin >> list2[i];
    }
    merge(size1, list1, size2, list2, list3);
    std::cout << "�ϲ��������Ϊ��";
    for (int i = 0; i < size1 + size2; i++) {
        std::cout << list3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}