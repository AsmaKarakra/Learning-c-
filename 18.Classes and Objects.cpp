// Classes and Objects 


#include <iostream> 

using namespace std; 


class Book {
	
	
	public: 
	
		string title; 
		
		string author; 
		
		int pages; 
		
		
}; 

int main() 

{

Book book1;

book1.title = "Harry Potter"; 
book1.author = "Jk Rowling"; 
book1.pages = 500; 


// this wll print out pages in book1 
cout << book1.pages;


	
	return 0; 
	
	
} 
