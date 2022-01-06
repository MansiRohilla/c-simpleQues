#include <iostream>
using namespace std;
int main()
{	int a;
	int b;
	int c;
	cout<<"Enter three numbers: \n";
	cin>>a>>b>>c;
	cout<<"your numbers forward:\n";
	cout<<'\t'<<a<<'\n'<<'\t'<<b<<'\n'<<'\t'<<c<<'\n';
	cout<<"your numbers reversed:\n"<<'\t'<<c<<endl<<'\t'<<b<<endl<<'\t'<<a;
	return 0;
}

