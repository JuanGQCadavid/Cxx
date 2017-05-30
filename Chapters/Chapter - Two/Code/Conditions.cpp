#include<iostream>

//Show if 2 integers are Equals

using std::cout;
using std::cin;
using std::endl;


/*
	using namespace std;
	
	wich enables the program to use all std header names  	
*/

int main(){
	int number1,number2;
	
	cout<<"Please, enter 2 Integgers Numbers"<<endl;
	cin>>number1>>number2;
	
	
	if (number1 == number2)
		cout<<number1<<" = "<<number2<<endl;
		
	if (number1 != number2)
		cout<<number1<<" != "<<number2<<endl;
	
	if (number1 > number2)
		cout<<number1<<" > "<<number2<<endl;
		
	if (number1 < number2)
		cout<<number1<<" < "<<number2<<endl;
		
	int result  = static_cast< int >('A');
	
	cout <<result;
}
