#include <iostream>
using namespace std;

char scoreToGrade (int score);

int main()
{	cout<<"Enter the test score (0-100) :";
	int score;
	cin>>score;
	char grade = scoreToGrade(score);
	cout<<"The grade is :"<<grade<<endl;
	return 0;
	}
	char scoreToGrade (int score)
{ int marks = score/10;
 char grade;
 switch(marks)
 {  case 10 :
 	case 9  :grade = 'A';
 	          break;
    case 8 : grade ='B';
    		 break;
    case 7 :grade = 'C';
    		break;
    case 6 :grade = 'D';
    default : grade = 'F';}
 return grade;
 }
 

