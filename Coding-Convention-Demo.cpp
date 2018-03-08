#include<iostream>
#include<stdlib.h>
#define pi 3.14
using namespace std;
class TinhDienTich
{
      public:
        void dienTich(int);                  //hinh tron
        void dienTich(int,int);              //hinh chu nhat
        void dienTich(float ,int,int);       //hinh tam giac
};
 
void fn::dienTich(int a)
{
      cout<<"Dien tich hinh tron la: "<<pi*a*a;
}
void fn::dienTich(int a,int b)
{
      cout<<"Dien tich hinh chu nhat la: "<<a*b;
}
void fn::dienTich(float t,int a,int b)
{
      cout<<"Dien tich hinh tam giac la: "<<t*a*b;
}
 
int main()
{
     int choice;
     int a,b,r;
     
     TinhDienTich obj;
     cout<<"1. Dien tich hinh tron";
	 cout<<"2. Dien tich hinh chu nhat";
	 cout<<"3. Dien tich hinh tam giac"; 
	 cout<<"4. Thoat";
     cout<<"Nhap lua chon cua ban: ";
     cin>>choice;
 
     switch(ch)
     {
              case 1:
                cout<<"Nhap ban kinh duong tron: ";
                cin>>r;
                obj.dienTich(r);
                break;
              case 2:
                cout<<"Nhap hai canh cua hinh chu nhat: ";
                cin>>a>>b;
                obj.dienTich(a,b);
                break;
              case 3:
                cout<<"Nhap cac canh cua hinh tam giac: ";
                cin>>a>>b;
                obj.dientTich(0.5,a,b);
                break;
              case 4:
                exit(0);
     }
return 0;
}