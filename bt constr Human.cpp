#include<iostream>
#include<string>
using namespace std;

class Human{
	private:
		string name;
		int age;
		int gender;
	public:
		Human();
		Human(string name,int age, int gender);
		void output();
};
  Human::Human(string name, int age, int gender)
{
	this->name=name;
	this->age=age;
	this->gender =gender;
}
void Human::output()
{
	cout<<"Name"<<this->name<<endl;
	cout<<"	Age"<<this->age<<endl;
    cout<<"Gender"<<this->gender<<endl;
	
}
Human::Human()
{
	this->name="";
	this->age=0;
	this->gender ="nam";
	
int main(){
	Human a("tu", 20, 1);
	a.output();
	return 1;
	
	
}
