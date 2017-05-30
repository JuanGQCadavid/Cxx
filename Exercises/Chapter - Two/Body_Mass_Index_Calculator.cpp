#include <iostream>
//IBM mass Calculator

using namespace std;

int main(){
	double user_Weigth = 0; //user Weigth
	double user_height = 0; //User Heigth
	double BMI = 0; //Body Mass Index
	
	// Getting user Information
	cout<<"Introduce your Weigth in kilograms"<<endl;
	cin>>user_Weigth;
	
	cout<<"Introduce your Heigth in Meters"<<endl;
	cin>>user_height;
	
	//Processing User Weigth
	BMI = user_Weigth/(user_height*user_height);
	
	if (BMI < 18.5)
		cout<<"My friend, you are Underweight."<<endl;
	if (BMI >= 18.5){
	
		if (BMI <= 24.9)
			cout<<"My friend, you are Normal."<<endl;
			
	}
	if (BMI >= 25){
	
		if (BMI <= 29.9)
			cout<<"My friend, you are Overweight."<<endl;
			
	}
	if (BMI >= 30)
		cout<<"My friend, you are Obese."<<endl;
		
	cout<<"BMI VALUES"<<"\n"
		<<"Underweight:"<<"\t"<<"less than 18.5"<<"\n"
		<<"Normal:"<<"\t\t"<<"between 18.5 and 24.9"<<"\n"
		<<"Overweight:"<<"\t"<<"between 25 and 29.9"<<"\n"
		<<"Obese:"<<"\t\t"<<"30 or greater"<<endl;
}

