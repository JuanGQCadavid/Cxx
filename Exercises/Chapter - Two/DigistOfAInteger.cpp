#include <iostream>
//split a lenght 5 Number into a String compused of Number by Number of the integer
using namespace std;


int main(){
	int number = 0;
	
	cin >>number;
	
	cout<<number/10000<<" "<<(number/1000)%10<<" "<<(number/100)%10<<" "<<(number/10)%10<<" "<<number%10<<endl;
	
	
	
}
