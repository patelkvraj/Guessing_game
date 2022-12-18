/*
AUTHOR:
_______

	Vraj K Patel

TOTAL FILES THE PROGRAM CONTAINS:
_________________________________

	Total files:	1
		1) Source.cpp


ABOUT THE PROGRAM:
__________________

	Part - 2
		Created on	:	12/15/2022
		Title (Name):	Guessing_game
		Description	:	The program randomly select an integer from 1 to 15. The user 
						will keep guessing numbers until they find the program's number, 
						and the program will tell them each time if their guess was too 
						high or too low:
							1 2 3 4 5 6 -> 7 <- 8 9 10 11 12 13 14 15
		Purpose		:	Little game to show the working of algorithm. 
		Challenges	:	-
*/

#include <iostream>
using namespace std;

//	function prototypes
int binarySearch(int [], int, int);

int main() {

	int const SIZE = 15;
	int list[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

	cout << binarySearch(list, SIZE, 2);

	return 0;	//	no return 
}

/*
Name	:	binarySearch()
Purpose	:	to give the position of a number in an array
Input	:	int [], int int
Output	:	int
*/
int binarySearch(int arr[], int size, int value) {
	int first = 0 ;		    //	first array element 
	int last = size - 1;	//	last array element
	int middle;				//	mid point of search 
	bool found = false;		//	flag
	int position = -1;		// position of search value

	while (!found && first <= last) {	// WHY ? first <= last 
		middle = (first + last) / 2;	//	calculate mid point
		if (arr[middle] == value) {		// if value is found at mid
			found = true;
			position = middle;
		}
		else if (arr[middle] < value) {		// if value is in upper half	
			first = middle + 1;
		}
		else {							// if value is in lower half
			last = middle - 1;			
		}
	}
	return position;
}


