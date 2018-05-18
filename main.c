#include <stdio.h>
#include <stdlib.h>
/* Class average program with counter-controlled repetition */

int main(int argc, char *argv[]) {
	unsigned int TheCounter; // number of grade to be entered next
	int TheGrade; // grade value
	int TheTotal; // sum of grades entered by user
	int TheAverage; // average of grades
	
	//initialization phase
	TheTotal = 0; // initialize total
	TheCounter = 1; // initialize loop counter
	
	//processing phase
	while (TheCounter <= 10) { // loop 10 times
	    printf("%s", "Enter grade: "); // prompt for input
		scanf("%d", &TheGrade); // read grade from user
		TheTotal = TheTotal + TheGrade; // add grade to total
		TheCounter = TheCounter + 1; // increment counter
		
	}// end while
	
	//termination phase
	TheAverage = TheTotal / 10; //integer division
	
	printf("Class average is %d\n", TheAverage); // display result
	
	system ("PAUSE");
	
	return 0;
} // end function main
