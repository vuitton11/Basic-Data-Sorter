//Returns i, d, or s depending on chosen col
char determineType(char* string) {

	int i;
	int length = strlen(string);
	int isString = 0;
	int isDouble = 0;

	//Determine if the string is a number (double or int)
	for (i = 0; i < length; i++) {
		
		if (isalpha(string[i]) ) isString = 1;
		break;
	}

	//If it isn't a string, determine if double or int


	
}