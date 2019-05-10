#include<iostream>
#include<iomanip>
using namespace std;
class taiLieu{
	protected:
		int matl;
		string tennhaxb;
		int sobanph;
	public:
		taiLieu();
		taiLieu(int matl, string tennhaxb, int sobanph);
		void output();
};
taiLieu::taiLieu(int matl, string tennhaxb, int sobanph) {
    this->matl = matl;
    this->tennhaxb = tennhaxb;
    this->sobanph = sobanph;
}
taiLieu::taiLieu(){
	this->matl = 0;
	this->tennhaxb = "";
	this->sobanph = 0;
}
void taiLieu::output() {
    cout<<"Ma tai lieu :"<<this->matl<<endl;
    cout<<"Ten nha xuat ban :"<<this->tennhaxb<<endl;
    cout<<"So ban phat hanh : "<<this->sobanph<<endl;
}
class sach: public taiLieu{
	protected:
	string tentg;
	string tensach;
	int sotrang;
	public:
		sach();
		sach(string tentg,string tensach,int sotrang);
		void output();
	
};
sach::sach() : taiLieu(){
	
}
void sach::output(){
	taiLieu::output();
	cout<<"Ten tac gia :"<<this->tentg<<endl;
	cout<<"Ten sach :">>this->tensach<<endl;
	cout<<"So trang :">>this->sotrang<<endl;
}
class tapChi: public taiLieu{
	protected:
		int soph;
		int thangph;
    public:
    	tapChi(int soph,int thangph);
    	void output();
};
void tapChi::output(){
	taiLieu::output();
	cout<<"So phat hanh:"<<this->soph<<endl;
	cout<<"Thang phat hanh:">>this->thangph<<endl;	
}
class bao: public taiLieu{
	protected:
	    int ngayph;
	public:
	    bao(int ngayph);
	    void output();
};
void bao::output(){
	taiLieu::output();
	cout<<"Ngay phat hanh :"<<this->ngayph<<endl;
}
int main()
{
	sach a()
	a.output();
	
    return 0;
}
	
