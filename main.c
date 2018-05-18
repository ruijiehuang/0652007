#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	unsigned int the_counter;
	int the_grade;
	int the_total;
	int the_average;
		
	the_total = 0;
	the_counter = 1;

	while (the_counter <= 10) {
	    printf("%s", "Enter grade: ");
		scanf("%d", &the_grade);
		the_total = the_total + the_grade;
		the_counter = the_counter + 1;	
	}
	
	the_average = the_total / 10;
	printf("class average is %d\n", the_average);
	system ("PAUSE");

	return 0;
}
