#include<iostream>
using namespace std;

class shape{
	public:
		int width;
		int height;
		void print();
		void setwidth(int w);
		void setheight(int h);
	private:// neu co private thi k lay cac thuoc tinh cua no ra de dung khi goi o ham main, con public thi dc
	void swap();
};

void shape::print(){
	cout <<width<<"-"<<height<<endl;
}
void shape::setwidth(int w){
	width = w;//truyen giatri cho width nen phai viet them ham cho no
void shape::setheight(int h){
    height = h;//truyen giatri cho height nen phai viet them ham cho no
}
void shape::swap(){
	int tmp = width;
	width = height;
	heght = tmp;
}

int main()
shape s1, s2;
s1.setwidth(10);
s1.width = 2;
s2.width = 4;
s1.print();
s2.print();
return 0;
}
