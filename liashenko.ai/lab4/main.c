#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>


int main() { 
	char *line = readline("Enter your string ");
	printf("%s\n", line);
	free(line);
	return 0;
}
