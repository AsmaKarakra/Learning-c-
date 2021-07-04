// object functions are functions in which we can put inside a class 


#include <iostream> 

using namespace std; 


class Student {
	
	public: 
	
		string name; 
		
		string major; 
		
		double gpa; 
		
		Student(string aName, string aMajor, double aGpa) {
			
			name = aName; 
			major = aMajor; 
			gpa = aGpa; 
			
		} 
		
		
		// function to see if student is on honor roll or not 
		
		bool hasHonors() {
			
			if (gpa > 3.5) {
				
			return false }
			
			else 
			{
			return true }
			
		}
		
} 



// then we can call this function in the main method 


int main() {

Student student1("Jim", "Business", 2.4); 

cout << student1.hasHonors(); 

// will print out 0 if false and 1 if true 

return 0; 

} 



