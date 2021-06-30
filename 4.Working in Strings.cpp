// working with Strings in c++ 

/* 	endl - tells C++ we want to print a new line - think of it like an enter 
	
	you can also do the same thing by adding "\n" inside our string 
	
	
*/ 
#include <isotram> 

using namespace std; 

int main() 

{
	cout <<      << endl; 
	
	cout << "Hello" << endl; 
	
	
	// you can also put a string into a varaible and print it out
	
	string phrase = "Hey how is it going!?" 
	
	cout << phrase; 
	
	
	return 0; 
	
} 

// String functions - a little block of code that we can call that can perform specific tasks for us 



#include <isotram> 

using namespace std; 

int main() 

{
	
	string phrase = "Hey how is it going!?" 
	
	cout << phrase.length(); 
	
	//output will be the length of the string 
	
	
	return 0; 
	
} 

// we can also access indviudal characters within the string 



#include <isotram> 

using namespace std; 

int main() 

{
	
	string phrase = "Hey how is it going!?";
	
	cout << phrase[0]; 
	
	//output will be the beginning index "H" 
	
	
	// we can also assign a string a new value 
	
	string phrase = "Hey how is it going!?"; 
	phrase[0] = 'B'; 
	cout << phrase; 
	
	
	// we can find something inside a string 
	string phrase = "Hey how is it going!?"; 
 
	cout << phrase.find("Academy", 4); 

	                // phrase find (we want, index we want to start at) 

		
		
	
	
	return 0; 
	
} 



// sub string function 
		
// substr( <starting index> , <length: amount of characters i want to grab> )  


int main() 

{ 

string phrase = "Giraffe Academy"; 
string = phrasesub;
phrasesub = phrase.substr(8,3); 
cout << phrasesub; 

return 0; 

} 
		
