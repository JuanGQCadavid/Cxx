/*
	
	* Define a Grade Book class with its data and functions members.
	
	* use this class (Grade Book) by means of Object class into the Main class and call its functions members.

*/

#include <iostream>


using namespace std;


// GradeBook class defenition


/*

	The class name is Pascal case, this measn that, the first letter is in Capital letter
	and each subsequent of word in the class name begins with capital letter. 

*/
class GradeBook
{
//Access specifier
public:
	//That means that this function is available for the public
	// by convention, the Function class name star with lowercase Letter
	//const means that this function doesn't modify the Object on wich is called 
	//Function that displays "My first class!;Farthermore, My first class Member Function!"
	void displayMessage() const //Function header
	{
		cout<<"My first class!;Farthermore, My first class Member Function!"<<endl;
	}//End Function displatMessage
	
}; //End class GradeBook


int main()
{
	GradeBook myGradeBook; // Create a GradeBook object name myGradeBook // GradeBook is a user-defined type!
	
	myGradeBook.displayMessage(); // Call Object's dysplayMessages function
	
}
