#include <iostream>
using namespace std;
int main(){
string nama;
int  a,b,c,d,e,hasil;

cout<<"masukkan nama : ";
cin>>nama;
cout<<"masukkan nilai Basis data : ";
cin>>a;
cout<<"masukkan nilai Aljabar : ";
cin>>b;	
cout<<"masukkan nilai PAI: ";
cin>>c;	
cout<<"masukkan nilai Struktur data: ";
cin>>d;	
cout<<"masukkan nilai basis data : ";
cin>>e;

hasil=(a+b+c+d+e)/5;

cout<<"nama = "<<nama<<endl;
cout<<"nilai rata-rata = "<<hasil<<endl;
 if(hasil>=86){
 	cout<<"nilai = A";
 }else if(hasil>=80){
 	cout<<"nilai = 	B";
 }else if(hasil>=70){
 	cout<<"nilai = 	C";
 }else if(hasil>=60){
 	cout<<"nilai = 	D";
 }else{
 	cout<<"nilai = E";
 }cout<<endl;
 
 
 	
}
