/*
	
	* Define a Grade Book class with its data and functions members.
	
	* use this class (Grade Book) by means of Object class into the Main class and call its functions members.

*/

#include <iostream>
#include <string> //c++ standar string class

using namespace std;

class GradeBook
{

public:
	void displayMessege(string courseName) const
	{
		cout<<"Welcome to the grade book for\n"<<courseName<<" !"<<endl;
	}
	
};


int main()
{
	string courseName;
	GradeBook myGradeBook;
	
	cout<<"Insert a course name"<<endl;
	getline(cin, courseName);
	cout<<endl; //Blank line.	
	
	myGradeBook.displayMessege(courseName);
}
