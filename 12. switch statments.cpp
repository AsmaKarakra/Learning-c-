/* Switch Statements - allow us to check one value against a bunch of other values

switch ( < Put value here that you want to compare >) {
	
	case <value you want to compare > : 
			
		< what you want to happen here > 
		
		break; 
	
	
	
} 





*/ 





#include <iostream> 

using namespace std; 


// Function to take in a day of the week and convert it to string 

string getDayOfWeek(int dayNum) {
	
	
	string dayName; 
	
	switch (dayNum) {
	
	case 0: 
		dayName = "Sunday"; 
		break; 
		
	
	case 1: 
		dayName = "Monday"; 
		break; 	
		
		
	case 2: 
		dayName = "Tuesday"; 
		break; 	
		
	// if none of the inputs match 
	 default: 
		dayName = "Invalid Day Number"; 
	} 
	
	
	return dayName
} 




int main() 

{ 

	cout << getDayOfWeek(0); 
	
	// output will be sunday 
	
return 0; 


} 
