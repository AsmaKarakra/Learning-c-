
// Return Statements in Java 

// return functions in cpp 

// functions must be created before the main method it is execuated in 

/* 

	Step 1: declare what data type function will return 
	
	void - doesnt return information 


	Step 2: Declare the name of the function 
	
	Step 3: Declare the parameters that will go into our function 
	
	<data type> <name> (<parameters>) 


*/ 


#include <iostream> 
using namepsace std 

double cube (double number) {
	
	double result = number * number * number; 
	
	return result; } 
	
	

int main() 
{
	
	// value returned from cube function will be stored in answer var 
	
	double answer = cube(5.0); 
	
	cout << answer; 
	
	// output will be 125 
	
	
	return 0; 
	
	
} 
