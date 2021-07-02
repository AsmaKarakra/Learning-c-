
// Building a calcuator // 

#include <isotream> 
#include <cmath> 

using namespace std; 

int main() 

{
	// Step 1: Create two vars to store the two nums we want to add together 
	
	int num1; 
	int num2; 
	
	/* 
	
	we can also rewrite this as int num1, num2
	
	*/ 
	
	// Step 2: Tell user to enter the first number 
	
	cout << "Enter the first number: " ; 
	cin >> num1; // the number they entered will be inside num1 varaible 
	
	
	cout << "Enter the second number: " ; 
	cin >> num2; // the number they entered will be inside num1 varaible 
	
	//Step 3: Print out the answer 
	
	cout << num1 + num2; 
	
	return 0; 
	
	// we can also do this with doubles and floats 
	
	
} 
