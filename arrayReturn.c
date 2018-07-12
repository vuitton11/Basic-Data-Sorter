#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Perform merge sort and comparison checking
/*
void mergeSort(group** row) {
	
	group * ptr = row[1];

	row[1] = row[2];

	row[2] = ptr;
}
*/

int * add() {
	int i;
	int* array = malloc( 10 * sizeof(int));
	int counter = 1;
	for (i = 0; i < 10; i++) {
		array[i] = counter;
		counter++;
	}

	return array;
}

	
int main () {

	long long int test = 398475983475983475983;

	printf("%d", test);
}

