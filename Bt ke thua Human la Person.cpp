#include <iostream>
#include <iomanip>
using namespace std;
class Human {
protected:
    string name;
    int age;
    int gender;
public:
    Human();
    Human(string name, int age, int gender);
    void output();
};

class Person: public Human {
protected:
    string phone;
    string address;
public:
    Person();
    Person(string name, int age, int gender, string phone, string address);
    void output();
};

Human::Human() {
    this->name = "";
    this->age = 0;
    this->gender = 0;
}

Human::Human(string name, int age, int gender) {
    this->name = name;
    this->age = age;
    this->gender = gender;
}

void Human::output() {
    cout<<"Name: "<<this->name<<endl;
    cout<<"Age: "<<this->age<<endl;
    cout<<"Gender: "<<this->gender<<endl;
}

Person::Person() : Human() {
    this->phone = "";
    this->address = "";
}

Person::Person(string name, int age, int gender, string phone, string address) : Human(name, age, gender) {
    this->phone = phone;
    this->address = address;
}

void Person::output() {
    Human::output();
    cout<<"Phone: "<<this->phone<<endl;
    cout<<"Address: "<<this->address<<endl;
}

int main(int argc, const char * argv[]) {
//    Human h1("Phu", 20, 1);
//    h1.output();
    Person p("Phu", 18, 1, "0905566500", "Da Nang");
    p.output();
    return 1;
}
