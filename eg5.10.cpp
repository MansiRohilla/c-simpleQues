#include <iostream>
#include <iomanip>
using namespace std;

void add()
{ int num1,num2;
	cout<<"Enter the two numbers: ";
    cin>>num1>>num2;
    cout<<num1<<" + "<<num2<<" = "<<(num1+num2)<<endl;
    return;
}
void subtract ()
{ int num1,num2;
cout<<"Enter the two numbers: ";
    cin>>num1>>num2;
    cout<<num1<<" - "<<num2<<" = "<<(num1-num2)<<endl;
    return ;
    
}
void multiply()
{ int num1,num2;
cout<<"Enter the two numbers: ";
    cin>>num1>>num2;
    cout<<num1<<" * "<<num2<<" = "<<(num1*num2)<<endl;
    return ;
}

void divide()
{ int num1,num2;
cout<<"Enter the two numbers: ";
    cin>>num1>>num2;
    cout<<num1<<" / "<<num2<<" = "<<(num1/num2)<<endl;
    return ;
    
    
}
int main()
{ 
char r;
 cout<<"press a/s/m/d for addition/subtraction/multiply/divide: ";
 cin>>r;
 if (r=='a')
 add();
 else if (r=='s')
 subtract();
 else if(r=='m')
 multiply();
 else if (r=='d')
 divide();
 else
 cout<<"\awrong input";
 return 0;
}





