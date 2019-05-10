#include<iostream>
#include<string>
using namespace std;

enum gioiTinh {Nam = 1, Nu = 2, Khac = 3 };

struct hocsinh 
{
	string Ten ;
	float Diem ;
	int Gioitinh;
	
};

void nhap (hocsinh a[], int n)
{
	for(int i; i < n; i++)
	{
		cout<< " Nhap ten hoc sinh :\n";
		cin>>a[i].Ten;
		cout<< " Nhap diem hoc sinh :\n";
		cin>>a[i].Diem;
		cout<< "Nhap gioi tinh hoc sinh (1: Nam, 2: Nu, 3: Khac):\n";
		cin>>a[i].Gioitinh;
	}	
}

void xuat (hocsinh a[], int n)
{
	for(int i; i < n; i++)
	{
		if((a[i].Diem < 4 && a[i].Gioitinh == Nam) || (a[i].Diem > 9 && a[i].Gioitinh == Nu))
		{
			cout << a[i].Ten << "\n";
			cout<< a[i].Diem << "\n" ;
			cout << a[i].Gioitinh << "\n";
		}
	}
}

int main ()
{
	
    hocsinh *HOCSINH;
	int b;
	cout<<"Nhap so luong hoc sinh:\t";
	cin>>b;	
	HOCSINH = new hocsinh[b];
	nhap (HOCSINH,b);
	xuat (HOCSINH,b);
	
	return 0;
	
}






