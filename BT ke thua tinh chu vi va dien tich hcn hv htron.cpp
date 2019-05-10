#include <iostream>
#include <iomanip>
using namespace std;
class Shape {
protected:
    float width, height;
public:
    void setValues(float width, float height) {
        this->width = width;
        this->height = height;
    };
};

class Rectangle: public Shape {
public:
    float area(){
        return this->width *  this->height;
    }
    float circuit() {
        return (this->width +  this->height)*2;
    }
};

class Square: public Shape {
public:
    void setValues(float width) {
        this->width = width;
        this->height = width;
    };
    float area(){
        return this->width *  this->height;
    }
    float circuit() {
        return (this->width +  this->height)*2;
    }
};

class Circle: public Shape {
public:
    void setValues(float radius) {
        this->width = radius;
        this->height = radius;
    };
    float area(){
        return this->width *  this->width * 3.1416;
    }
    float circuit() {
        return this->width * 3.1416;
    }
};

int main() {
    Rectangle rect;
    rect.setValues(8, 9);
    cout<<"Rectangle Area: "<<rect.area()<<endl;
    cout<<"Rectangle Circuit: "<<rect.circuit()<<endl;
    Square s;
    s.setValues(8);
    cout<<"Square Area: "<<s.area()<<endl;
    cout<<"Square Circuit: "<<s.circuit()<<endl;
    Circle c;
    c.setValues(4);
    cout<<"Circle Area: "<<c.area()<<endl;
    cout<<"Circle Circuit: "<<c.circuit()<<endl;
    
    return 0;
}
