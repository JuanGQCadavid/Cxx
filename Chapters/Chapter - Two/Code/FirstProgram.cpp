#include <iostream> // This allows the program to use Input/Output  // Its a prepocessing Directive // It Calls the iosream Header

/*
	Lines that begin with # are processed by the preprocessor before the program
	is compiled.
*/

// It's a good pratice beging the code with a Brief description
// Print "Welcome to TomorrowLand!"

int main()
{
	std::cout << "Welcome to TomorrowLand! \a WHAT!"; // The Whole line is named as Statement 
	
	/*
		C++ standard, if program execution reaches the end of main without encountering a return
		statement, it’s assumed that the program terminated successfully
	*/
	
	return 0; // Indicates the program ended without problems.	
}

