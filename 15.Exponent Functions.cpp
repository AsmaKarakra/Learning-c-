// Exponent Function // 


#include <iostream> 

using namepsace std; 

int power(int baseNum, int powNum) {
	
	int result = 1; 
	
	for( int i = 0; i < powNum; i++) {
		
		result = result*baseNum; 
		
	} 
	
	
	
return result 

} 



int main() 

{
	cout << power(2,3); 
	
	//output will be 8 
	return 0; 
	
	
} 
