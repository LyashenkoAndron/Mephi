#include "func.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <readline/readline.h>


int main() {
	char *line = readline("Enter your string ");
	char **arr_res = NULL;
	int cnt = 0;

	make_array_words(&arr_res, &line, &cnt);

	sort(&arr_res, cnt);

	print_array(arr_res, cnt);
	free(line);

	free(arr_res);
	
	return 0;
}
