#include <iostream>
#include <iomanip>
using namespace std;

 int main()
 {int a;
  int b;
   int c;
    cout<<"Enter the two integral numbers :";
    cin>>a>>b;
    c = a/b;
    cout<<a<<"/"<<b<<" is : "<<c;
	cin>>a>>b;
	c = a%b;
	cout<<"with a remainder "<<c;
	return 0;
	}
