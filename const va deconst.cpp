#include<iostream>
#include<iomanip>
using namespace std;

class Timer{
public:
	int h;
	int m;
	int s;
	Timer(int h, int m, int s);// cho h co gia tri 10 va m va s thi o duoi ham main khi dua ket qua van lay gia tri trong new timer
	// them ham constructor thi phai goi them ham phia duoi
	Timer();
};
Timer::Timer(int h, int m, int s)
{
	this->h=h;//neu cho this -> h=20 thi khi xuat ra h cung bang 20 no phai xu ly ham constr cua no trc
	this->m=m;
	this->s=s;
}
Timer::Timer()
int main()
{
	Timer*timer = new Timer(5,16);//neu truyen gia tri thi lay mac dinh trong new timer (5,16) la lay gia tri 5,16
	cout<<timer->h<<endl;
}
