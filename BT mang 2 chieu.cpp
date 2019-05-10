#include<iostream>
using namespace std;

int main ()
{
	int a[11][11], n;
    cout<<" Nhap vao so hang va so cot cua ma tran :";
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
		cout<<"Nhap a["<< i <<"],["<< j << "] =";
		cin>>a[i][j];
	    }
	}
	cout<< "Ma tran vua nhap la :\n";
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		cout<<a[i][j]<<'\t';
		cout<< "\n";
    }
    int d = 0;
    	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		if(int (a[i][j]) % 2 == 0)
	     d++;
	 }
    cout<<" Phan tu co " << d <<" phan nguyen la so chan\n";
    cout<< " Cac phan tu nam tren duong cheo chinh :";
    	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		cout<<a[i][i];
	}
	cout<<"\nTong cac phan tu nam tren duong cheo chinh la ";
	int sum1 = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		if(i == j)
		sum1 += a[i][j];
	}
	cout << sum1;
	cout<<"\nTong cac phan tu nam tren duong cheo phu la ";
	int sum2 = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		if(i + j == n + 1)
	    sum2 += a[i][j];
    }
    cout<< sum2;
    cout<<" \nCac phan tu nam tren duong bien la ";
    for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		if( i == 1 || j == n || i == n || j == 1)
		cout <<a[i][j];
    }
    int min = a[1][1];
    for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
        if(min > a[i][j]) min = a[i][j];
    }
        cout<<"\n Cac phan tu nho nhat nam tai cac vi tri :";

        for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		if(min == a[i][j])
		cout<<"Hang "<< i <<"Cot "<<j;
	}
    
    return 0;
}

