#include <iostream>
#include <iomanip>
using namespace std;
class Timer {
public:
    int *h;
    Timer() {
        
    }
    Timer(Timer& t) {
        this->h = new int;
        *this->h = *t.h + 30;
    }
};

int main(int argc, const char * argv[]) {
    Timer t1;
    t1.h = new int;
    *t1.h = 60;
    Timer t2 = t1;
    cout<<*t1.h<<endl;
    cout<<*t2.h<<endl;
    return 1;
}
