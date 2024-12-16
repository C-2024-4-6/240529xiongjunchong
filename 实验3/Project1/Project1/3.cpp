#include<iostream>
using namespace std;
class BOX
{
private:
	int length;
	int width;
	int height;
public:
	BOX()
	{
		length = 0;
		width = 0;
		height = 0;
	}
	void set(int L, int W, int H)
	{
		length = L;
		width = W;
		height = H;
	}
	void showV()
	{
		cout << "体积为:" << length * width * height << endl;
	}
};
//int main()
//{
//	BOX b1;
//	BOX b2;
//	BOX b3;
//	int L1, L2, L3, W1, W2, W3, H1, H2, H3;
//	cout << "请分别输入三个长方体的长宽高：";
//	cin >> L1 >> W1 >> H1 >> L2 >> W2 >> H2 >> L3 >> W3 >> H3;
//	b1.set(L1, W1, H1);
//	b2.set(L2, W2, H2);
//	b3.set(L3, W3, H3);
//	b1.showV();
//	b2.showV();
//	b3.showV();
//}