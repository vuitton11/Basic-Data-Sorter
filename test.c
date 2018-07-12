#include <stdio.h>
#include <string.h>


int main () {

	char* test = "test ,2,\"crazy, gay\", gockle";

	char* found = strstr(test, "\"");
	char* string = strdup(found);
	
	//Tokenized special case
	char* token = strsep(&string, "\"");
	token = strsep(&string, "\"");
	printf("token: %s\n", token);

	//Tokenize remainder
	token = strsep(&token, ",");
	printf("token: %s\n", token);

	printf("%s\n", found);

	return 0;
}