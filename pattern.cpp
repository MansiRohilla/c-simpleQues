//partern printing in rows and columns ;

#include <iostream> 
using namespace std;

//int main(){
//	int num1;
//	int num2;
//	cout<<"enter the number of rows: ";
//	cin>>num1;
//	cout<<"enter the number of columns:";
//	cin>>num2;
//	
//	for(int j = 1 ; j<=num1 ; j++){
//	
//	
//	for(int i = 1 ; i<=num2 ; i++){
//		
//		cout<<"*"<<" ";
//	}
//		cout<<endl;
//	
//}
//	
//}
//int main(){
//	
//	int num;
//	cout<<"enter the number of rows: ";
//	cin>>num;
//	
//	for(int i = 1 ; i<=num ; i++){
//		
//		for(int j = 1 ; j<=i ; j++){
//			
//			cout<<"*"<<" ";
//
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//int main(){
//	
//	int num;
//	cout<<"enter the number of rows: ";
//	cin>>num;
//	
//	for (int i = 1 ; i<=num ; i++){
//		
//		for(int j = 1; j<=i ; j++){
//			
//			cout<<j<<" ";
//			
//			}
//		 cout<<endl;
//		}
//	}

//int main(){
//	 
//	 int num1;
//	 int num2;
//	cout<<"enter the number of rows: ";
//	cin>>num1;
//	cout<<"enter the number of columns: ";
//	cin>>num2;
//	
//	
//	for(int i = 1 ; i<=num1 ; i++){
//		
//		for(int j = 1 ; j<=num2 ; j++){
//			
//			cout<<j<<" ";
//		 }
//		cout<<endl;
//   	}
//}
  
//int main(){
//	
//	int num;
//	cout<<"enter the number of rows: ";
//	cin>>num;
//	int num2;
////	cout<<"enter the number of columns: ";
////	cin>>num2;
//	int sum = 1 ;
//	
//	for(int i = 1 ; i<=num ; i++){
//		
//		for(int j = 1 ; j<=i ; j++){
//			
//		
//			cout<<sum<<" ";
//			sum = sum + 1;
//			
//		}
//		cout<<endl;
//	}
//}
	
	
int main(){
	int sum = 0;
	int x;
	int num;
	int n;
	cout<<"enter the number to start your  table: ";
	cin>>num;
	cout<<"till which no. you want to print table: ";
	cin>>x;
	cout<<"till what no. you want to multiply your table no.: ";
	cin>>n;
	 for (int num = 2 ; num<=x; num++){
	 	
	 	for(int j = 1 ; j<=n; j++){
	 		
	 		cout<<num*j<<" ";
	 		sum = sum + 1;
		 	}
		 cout<<endl;
	 }
	return 0;
}
	
	
	





















