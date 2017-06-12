/*

	Let's use a constructor
	
*/

#include <iostream>
#include <string>

using namespace std;

/*
	For data members that are objects
	of other classes, the default constructor implicitly calls each data member’s default constructor
	to ensure that the data member is initialized properly. This is why the string data
	member courseName (in Fig. 3.5) was initialized to the empty string—the default constructor
	for class string sets the string’s value to the empty string.
*/

class GradeBook
{
public:
	explicit GradeBook(string courseName,int numero): //member-initializer list
		courseName(courseName),test(numero)// member initializer to initialize courseName
		 //The member initializer list executes before the body of the constructor executes.
	{
		//Constructor's Body
	}
	
	string getCourseName()
	{
		return courseName;
	}
	
	explicit GradeBook():
		courseName(),test()
	{
	}
	
	void setCourseName(string courseName)
	{
		this-> courseName = courseName;
	}
	
	int getTest()
	{
		return test;
	}
	
	void displayMessage()
	{
		cout<<"Welcome to the grade book for\n"<<getCourseName()<<"!"<<endl;
	}
	
private:
	string courseName;
	int test;
	
};


int main()
{
	GradeBook myGradeBook( "CS101 Introduction to C++ Programming" ,101);
	GradeBook myGradeBook2( "CS102 Data Structures in C++" ,102);
	
	cout << "gradeBook1 created for course: " << myGradeBook.getCourseName()  
		 << "\ngradeBook2 created for course: " << myGradeBook2.getCourseName()  << endl;
		 
	cout<< myGradeBook.getTest()<<endl;
	
	GradeBook myGradeBook3;
	
	//myGradeBook3.setCourseName("Sap nigga");
	
	cout<<myGradeBook3.getCourseName();
	
}



