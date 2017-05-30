#include <iostream>
// Car-Pool Savings Calculator

using namespace std;

int main(){
	int total_miles_driven_per_day, cost_per_gallon_of_gasoline,
		average_miles_per_gallon, parking_fees_per_day,
		tolls_per_day;
		
	cout<<"Please, enter: Total miles driven per day,Cost per gallon of gasoline, Average miles per gallon, Parking fees per day, Tolls per day separated by space"<<endl;
	
	cin>>total_miles_driven_per_day>>cost_per_gallon_of_gasoline>>average_miles_per_gallon>>parking_fees_per_day>>tolls_per_day;
	
	cout<<total_miles_driven_per_day+cost_per_gallon_of_gasoline+average_miles_per_gallon+parking_fees_per_day+tolls_per_day<<endl;
}


