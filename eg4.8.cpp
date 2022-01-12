#include <iostream>
#include <iomanip>
using namespace std;

void var(int &a , int &b){
	
	cout<<"enter the two numbers: ";
	cin>>a>>b;
	 int qu = a / b;
	 int remainder = a % b ;
	 cout<<fixed<<showpoint<<setprecision(2)<<" the quotient is : "<<float(qu)<<endl;
	 cout<<fixed<<showpoint<<setprecision(2)<<"the remainder is : "<<float(remainder)<<endl;
	 
}
int main (){
	
     int x
	 int y;
	
	 var(x , y);
	 

}
