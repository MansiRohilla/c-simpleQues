#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ const float TV = 400.0;
  const float VCR = 220.0;
  const float Remote = 35.20;
  const float CD = 300.0;
  const float Tape = 150.0;
  float sum;
  float tax;
  float total;
  int a;
  int b;
  int c;
  int d;
  int e;
  cout<<"Enter the number of TV bought : ";
  cin>>a;
  cout<<"Enter the number of VCR bought : ";
  cin>>b;
  cout<<"Enter the number of Remote bought : ";
  cin>>c;
  cout<<"Enter the number of CD bought : ";
  cin>>d;
  cout<<"Enter the number of Tape bought : ";
  cin>>e;
  sum = (TV*a + VCR*b + Remote*c + CD*d + Tape*e);
  tax = 8.25/100.0;
  total =sum + (sum*tax);
  cout<<"list of item purchased and subtotal :\n\n";
  cout<<setw(5)<<setfill(' ')<<"QTY"<<'\t'<<setw(15)<<setfill(' ')<<"DESCRIPITION"<<'\t'<<'\t'<<setw(10);
  cout<<"UNIT PRICE"<<'\t'<<setw(15)<<"TOTAL PRICE\n";
  cout<<setw(5)<<setfill(' ')<<a<<'\t'<<setw(15)<<"TV"<<'\t'<<'\t'<<setw(10)<<TV<<'\t'<<setw(15)<<TV*a<<endl;
  cout<<setw(5)<<setfill(' ')<<b<<'\t'<<setw(15)<<"VCR"<<'\t'<<'\t'<<setw(10)<<VCR<<'\t'<<setw(15)<<VCR*b<<endl;  
  cout<<setw(5)<<setfill(' ')<<c<<'\t'<<setw(15)<<"Remote"<<'\t'<<'\t'<<setw(10)<<Remote<<'\t'<<setw(15)<<Remote*c<<endl;
  cout<<setw(5)<<setfill(' ')<<d<<'\t'<<setw(15)<<"CD"<<'\t'<<'\t'<<setw(10)<<CD<<'\t'<<setw(15)<<CD*d<<endl;
  cout<<setw(5)<<setfill(' ')<<e<<'\t'<<setw(15)<<"Tape"<<'\t'<<'\t'<<setw(10)<<Tape<<'\t'<<setw(15)<<Tape*e<<endl;
  cout<<'\n'<<setw(5)<<setfill(' ')<<'\t'<<'\t'<<setw(30)<<"Sum"<<'\t'<<setw(10)<<sum<<endl;
  cout<<setw(5)<<setfill(' ')<<'\t'<<'\t'<<setw(30)<<"tax"<<'\t'<<setw(10)<<"8.25%"<<endl;
  cout<<setw(5)<<setfill(' ')<<'\t'<<'\t'<<setw(30)<<"total"<<'\t'<<setw(10)<<total<<endl;
  cout<<'\t'<<"---------"<<"THANKYOU FOR SHOPPING WITH US"<<"---------------";
  
  
  
  
  
  
  
  
  
  
  
  
  
    
  
}
