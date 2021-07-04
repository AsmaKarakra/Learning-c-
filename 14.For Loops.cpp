/* 

for loops - helps us keep track of how many times we've gone through a loop using an index variable

 for ( <variable declartion> ; <condition to keep going>; <incrememnt>) {
	 
	code we want to execuate 
	 
 } 



*/ 



#include <iostream> 

using namespace std; 


int main () 


{ 

int i = 1; 

	for (int i = 1; index <=5; i++) {
		
		cout << i << endl; 

	return 0; 


} 

} 



// to print out the indexes or elements within an array 

int main() {
	
	int nums[] = {1, 2, 5, 7, 3}; 
	
	for (int i = 0; i <5; i++) {
		
		cout << nums[i] << endl; 
		
	} 
	
	return 0; 
	
} 
