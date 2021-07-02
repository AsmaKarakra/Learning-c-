
// Getting user input 

using namespace std; 

int main() 

{
	
	// step 1: store the information somewhere 
	int age;

	// Step 2: Tell user what to enter 
	cout << "Enter your age: "; 
	
	// input information into varaible
	cin >> age; 
	
	
	cout << "You are " << age << " Years old!"; 
	
	
	// you can also do the same thing for characters 
	
	return 0; 
	
	
} 


// For a string of text - we handle user input a little bit differently 


{
	
	// step 1: store the information somewhere 
	string name;

	// Step 2: Tell user what to enter 
	cout << "Enter your age: "; 
	
	// input information into varaible
	getline(cin, name); // allows us to get an entire line 
	
	
	cout << "Hello" << name; 
	
	
	return 0; 
	
	
} 
