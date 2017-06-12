/*
	
	* Define a Grade Book class with its data and functions members.
	
	* use this class (Grade Book) by means of Object class into the Main class and call its functions members.

*/

#include <iostream>
#include <string>

using namespace std;


/*
	The default access for class members is private so all members after the class header
	and before the first access specifier (if there are any) are private. The access specifiers
	public and private may be repeated, but this is unnecessary and can be confusing.

*/

/*
	If we decide to change the data member courseName in
	some way, the displayMessage definition will not require modification—only the bodies
	of the get and set functions that directly manipulate the data member will need to change.

*/


class GradeBook
{
public: //Functions member

	/*
	
	assigns name to data member courseName, thus modifying
	the object—for this reason, we do not declare setCourseName const.
	
	Declaring data members with access specifier private is known as data hiding
	
	When a program creates a GradeBook object, data member courseName is encapsulated (hidden)
	
	*/
	void setNameOfGrade(string nameOfGrade)  // mutators (because they mutate, or change, values)
	{
		this->nameOfGrade = nameOfGrade;
	}
	
	string getNameofGrade() const //accessors (because they access values).
	{
		return nameOfGrade;
	}
	
	void displayMessege() const
	{
		cout<<"Welcome to the grade book for\n"<< getNameofGrade() <<endl;
	}
	
private:
	
	string nameOfGrade; // data Member
};

int main(){
	string nameOfCourse;
	GradeBook myGradeBook;
	
	cout<<"Insert the name of the grade"<<endl;
	
	getline(cin, nameOfCourse);
	
	cout<<endl;
	
	myGradeBook.setNameOfGrade(nameOfCourse); //calling function, client of an object
	myGradeBook.displayMessege(); //calling function
}
