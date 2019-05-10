#include<iostream>
#include<iomanip>
using namespace std;

class Timer{
public:
	int h;
	int s;
	Timer(int h1,int s1): h(h1),s(s1){
		cout<<"1"<<endl;
	}
	Timer(){
		cout<<"2"<<endl;
	}
	~Timer(){
		cout<<"3"<<endl;
	}
};
int main()
{
	Timer*timer = new Timer(5,16);//neu truyen gia tri thi lay mac dinh trong new timer (5,16) la lay gia tri 5,16
	cout<<timer->h<<endl;
}
