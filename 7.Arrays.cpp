
// Arrays in c++ 

#include <iostream> 
#include <cmath> 

using namespace std; 

int main () 


{ 

/* 

<type of varaibles> <name of array> [] = { <stuff>, <stuff>, <stuff>, }; 

*/ 



int luckyNums[] = {4, 8, 15, 16, 23, 42}; 

cout << luckyNums[0];

//output will be 4, this will access the first variable in the index 


// we can also modify the elemnts in the array 



int luckyNums[] = {4, 8, 15, 16, 23, 42}; 

luckyNums[0] = 9; 

cout << luckyNums[0];

//output will be 9 instead of 4 




return 0; 


} 



// we can also assign values in c++ by index 

int main () 

{ 


int luckyNums[20]; 

luckyNums[0] = 100; 


// you can do the same for indexes 1-20! 

cout << luckyNums[0]; 



return 0; 

} 
