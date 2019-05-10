#include <iostream>
#include <iomanip>
using namespace std;
class Human {
private:
    string name;
    int age;
    int gender;
    int address;
    int phone;
public:
    Human();
    Human(string name, int age, int gender);
    void output();
    void setValues(string name, int age, int gender,int address,int phone) ;
};
class Person: public Human{
	void setValues(string name, int age, int gender,int address, int phone) {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->address = address;
        this->phone = phone;
    };
class Person: public Human{
	void setValue(){
	    this->name = " ";
        this->age = 0;
        this->gender = 0;
        this->address = 0;
        this->phone = 0;
};
void Person::output() {
    cout<<"Name: "<<this->name<<endl;
    cout<<"Age: "<<this->age<<endl;
    cout<<"Gender: "<<this->gender<<endl;
    cout<<"Address:"<<this->address<<endl;
    cout<<"Phone:"<<this->phone<<endl;
}
int main(int argc, const char * argv[]) {
    Person h1;
	h1.setValue,("Phu", 20, 1,56,99);
    h1.output();
    return 1;
}
