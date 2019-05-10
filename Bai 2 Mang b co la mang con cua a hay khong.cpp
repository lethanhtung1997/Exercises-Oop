#include<iostream>
#include<conio.h>

using namespace std;

void Nhap(int a[], int n)
{
	do
 {
	cout<<"Nhap vao so phan tu : \n";
	cin>>n;
	if( n<=0 )
	{
	    cout<<"So phan tu khong hop le. Xin kiem tra lai !";
	} 
 }   
	while (n <= 0);
    for(int i; i < n;i++)
	{
		cout<<"Nhap vao phan tu thu a["<<i+1<<"]"<< endl;
		cin >> a[i];
	}
}
void Xuat(int a[], int n)
{
    for(int i; i < n; i++)	
    {
    	cout << a[i];
	}
}
void kiemTraMang(int a[], int b[], int na, int nb)
{
	int ktra = 0;
	for(int i; i < na; i++)
	{
	    if(a[i] == b[0])
	{
	    int start = i;
	 int ktra=1;
    for(int j; j < nb; j++)
	{
	   if(b[j] != a[start++])
	    ktra=0;
	    break;
	}
    }
    }
}
int main() 
{
	int a[20],b[20],na,nb;
	Nhap(a,na);
	Xuat(a,na);
	Nhap(b,nb);
	Xuat(b,nb);
	int ktra = kiemTraMang(a,b,na,nb);
	if(ktra != 1)
	{
		cout<<"\nMang b khong phai la con cua a";
	}
	else
	{
		cout<<"Mang b la mang con cua a";
	}
	getch;
	return 0;
 }
