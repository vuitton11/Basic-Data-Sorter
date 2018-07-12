void mergeSort(int target, group** rowArr) {
	
	int i, j;

	/*
	 * Determine the type needed by taking a sample
	 * from one of the structs and determining type.
	 * Then we can import the data.
	 */
	char * test = strdup( rowArr[0]->metadata[target] );
	char det = determineType(test);

	//Case 1) If we have a string
	if (det == 's') {
		char** array;
		stringArray(target, array, rowArr);
	}

	//Case 2) If we just have a number. Use a double
	//		  for the sake of keeping huge numbers.
	else if (det == 'd') {
		double* array;
		doubleArray(target, array, rowArr);
	}

	/*
	 * NOW, SPLIT INTO LEFT AND RIGHT ARRAYS
	 */

	//Determine the left and right arrays
	if (rows % 2 == 1 && det == 'd') {
		
		int leftSize = (rows/2) + 1;
		int rightSize = rows - leftSize;

		double* left = malloc(leftSize * sizeof(double));
		double* right = malloc(rightSize * sizeof(double));

		for (i = 0; i < leftSize; i++) {
			left[i] = array[i];
		}

		for (i = 0; i < rightSize; i++) {
			right[i] = array[leftSize + i];
		}		
	}

	else if (rows % 2 == 1 && det == 's') {
		int leftSize = (rows/2) + 1;
		int rightSize = rows - leftSize;

		char** left = malloc(leftSize * sizeof(char*));
		char** right = malloc(rightSize * sizeof(char*));

		for (i = 0; i < leftSize; i++) {
			left[i] = array[i];
		}

		for (i = 0; i < rightSize; i++) {
			right[i] = array[leftSize + i];
		}
	}

	else if (rows % 2 == 0 && det == 'd') {
		double* left = malloc( (rows/2) * sizeof(double) );
		double* right = malloc( (rows/2) * sizeof(double) );

		for (i = 0; i < rows/2; i++) {
			left[i] = array[i];
			right[i] = array[(rows/2) + 1];
		}
	}

	else if (rows % 2 == 0 && det == 's') {
		char** left = malloc( rows/2 * sizeof(char*) );
		char** right = malloc( rows/2 * sizeof(char*) );

		for (i = 0; i < rows/2; i++) {
			left[i] = array[i];
			right[i] = array[(rows/2) + 1];
		}
	}

	/*
	 * PERFORM MERGE SORT
	 */
}