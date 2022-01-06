#include <iostream>
#include <iomanip> 
using namespace std;

int main()
 {  cout<< "conversion of decimal to hexa and octal\n";
    int a ;
    int a2;
    cin>>a ;
    cout<<"THe hexa conversion of" <<" "<<a<<" is:\n";
    cout<<hex<<a<<endl ;
    
    cout<<"enter the decimal value for octal conversion: ";
    cin>>a;
	cout <<"The octal conversion of " <<" "<<dec<<a<<" is:"<<'\n';
	cout<<oct<<a<<endl;   
    return 0;
 }
