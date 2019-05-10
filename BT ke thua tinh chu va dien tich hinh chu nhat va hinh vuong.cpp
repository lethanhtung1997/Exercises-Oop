#include<iostream>
#include<iomanip>
using namespace std;
class Shape{
	private:
		float width,height;
	public:
		void setValue(float width, float height){
		this->width = width;
		this-> height = height;
		};	
};
class Rectangle:public Shape{
	public:
		float area();
		{
		return this->width * this->height;
	}
};
class Square: public Shape{
	public:
		void setValue(float width){
			this->width = width;
			this->height = width;
		}
		float area(){
			return this->width * this->height;
		}
};
int main()
{
	Rectangle rect;
	rect.setValues(8, 9);
    cout<<rect.area()<<endl;
    Square s;
    s.setValues(8);
    cout<<s.area()<<endl;
    return 0;
}
	
}
