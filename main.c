#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	unsigned int TheCounter;
	int TheGrade;
	int TheTotal;
	int TheAverage;
		
	TheTotal = 0;
	TheCounter = 1;

	while (TheCounter <= 10) {
	    printf("%s", "Enter grade: ");
		scanf("%d", &TheGrade);
		TheTotal = TheTotal + TheGrade;
		TheCounter = TheCounter + 1;	
	}
	
	TheAverage = TheTotal / 10;
	printf("class average is %d\n", TheAverage);
	system ("PAUSE");

	return 0;
}
