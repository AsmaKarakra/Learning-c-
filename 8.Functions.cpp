
// Functions 

#include <iostream> 

using namespace std; 

// void - function will not return anything 

void sayHi() {
	
	cout << "Hello User" ; 
	
} 



// the main function is what gets execuated when we run our program 

int main() 


{	
	
	// Calling the function that we defined above - we will execuate all of the code inside the function 
	sayHi(); 
	
	return 0; 
} 


// we can also add paramters to our functions to mess around with 


void sayHi(String name, int age) 
{  

cout << "Hello" << name; << "You are " << age;  

} 


int main() 
{
	
	sayHi("Mike", 26); 
	
	return 0; 
	
	
	// output will be "Hello Mike, You are 26" 
} 



