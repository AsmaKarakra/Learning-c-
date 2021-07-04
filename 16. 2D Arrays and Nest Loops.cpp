
// 2D Arrays and Nested Loops // 


#include <iostream> 

using namepsace std; 

int main() 

{
	// 2D array
	
	/* we can also specify it as int numberGrid[3][2] with a fixed size */ 
	
	int numberGrid [][] = { 
								{1, 2}, 
								{3, 4}, 
								{5, 6}, 
              								}; 
											
	// to access elements in 2D Array you need to specify elements via row and column 
	
	cout <<numberGrid[0][1]; 
	
	
	return 0; 
	
	
} 




// Nested for loops - can be used to print out elements inside 2D array

int main() 

{
	// 2D array
	
	/* we can also specify it as int numberGrid[3][2] with a fixed size */ 
	
	int numberGrid [][] = { 
								{1, 2}, 
								{3, 4}, 
								{5, 6}, 
              								}; 
	
	for (int = 0; i <3; i++) {
		
		for (int = 0; j < 2; j++) {
			
			cout << numberGrid[i][j]; 
		}
			
	
			//print out new line after elememts
			cout << endl; 
	}
	return 0; 
	
	
} 

