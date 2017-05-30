#include <iostream>

int main(){
	
	int number1,number2,result;
	
	std::cout << "Insert First Number"<<std::endl;
	std::cin >> number1;
	
	std::cout << "Insert Second Number"<<std::endl;
	std::cin >> number2;
	
	result = number1 + number2;
	
	// With Division of integers, e.i. 7/8 is 0, No rouding occurs
	
	std::cout << "The result is: " << result<<std::endl;

	/*
		An identifier
		is a series of characters consisting of letters, digits and underscores ( _ ) that does not
		begin with a digit. C++ is case sensitive—uppercase and lowercase letters are different, so
		a1 and A1 are different identifiers.

		Use identifiers of 31 characters or fewer to ensure portability.
		
		Do not use identifiers that begin with underscores and double underscores, because C++
		compilers may use names like that for their own purposes internally. This will prevent the
		names you choose from being confused with names the compilers choose.
		
		
		std::cout << "Sum is " << number1 + number2 << std::endl;
	*/	
	
}
