#include <iostream>
using namespace std;

int firstdigit(int num1)
{  return (num1 % 10);

}
int main ()
{int num;
	 cout<<"Enter the digit: ";
	 cin>>num;
	 int digit =firstdigit(num);
	 cout<<"Least significant digit is: "<<digit<<endl;
	 return 0;
}
