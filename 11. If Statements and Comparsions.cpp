// if statements - comparsions // 

/* 

You can use < or > 

you can use "not equal" != 

you can use "is equal" == 

*/ 


#include <isotream> 


using namespace std; 

int getMax(int num1, int num2) {
	
	int result; 
	
	if (num1 > num2) {
		
		result = num1; 
	} 
	
	else { 
	
	result = num2; }
	
	return result; 
	
} 




int main() {
	
	cout << getMax(2,5); 

	return 0; } 
