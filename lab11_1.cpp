#include<iostream>
#include <string>
using namespace std;

int main(){
	int count[5]={0,0,0,0,0},i=1; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	
	do{
		
		cout << "Student [" << i << "]: ";
		cin >> grade; 
		
		if(grade == 'A'){ 
			count[0]++;
		}else if(grade == 'B'){count[1]++;}
		else if(grade == 'C'){ count[2]++;}
		else if(grade == 'D'){ count[3]++;}
		else if(grade == 'F'){ count[4]++;}
		else if(grade == '0'){ break;}
		else{ 
			cout<<"Wrong input. Please input again.\n";
			continue;
		} 
		i++;
	}while(true);
	
	
	cout << "In total " << i-1 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;			
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
