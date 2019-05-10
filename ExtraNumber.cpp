#include <iostream>
#include <iomanip>
using namespace std;
class Number {
private:
    int value;
public:
    Number();
    Number(int);
    void extra(int);
    void extra(float);
    void print();
};

Number::Number() {
    this->value = 0;
}

Number::Number(int value) {
    this->value = value;
}

void Number::extra(int extraValue) {
    this->value = this->value + extraValue;
}

void Number::extra(float extraValue) {
    this->value = this->value + int(extraValue) + 5;
}

void Number::print() {
    cout<<this->value<<endl;
}

int main(int argc, const char * argv[]) {
    Number number;
    number.extra(10);
    number.print();
    number.extra(float(15.0));
    number.print();
    return 1;
}
