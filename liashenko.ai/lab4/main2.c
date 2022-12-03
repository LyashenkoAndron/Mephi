#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <readline/readline.h>


int main() {
	char *line = readline("Enter your string ");
	char **cnst = NULL;
	int cnt = 0;
	printf("\n-------------------------\n");

	char *del_word = strtok(line, " ");
	while (del_word != NULL) {
		cnst = realloc(cnst, (cnt + 1) * sizeof(cnst));
		cnst[cnt] = del_word;
		cnt += 1;
		del_word = strtok(NULL, " ");
	}
	free(del_word);
	
	for (int i = cnt - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			if (strlen(cnst[j]) > strlen(cnst[j + 1])) {
				char *vr = cnst[j];
				cnst[j] = cnst[j + 1];
				cnst[j + 1] = vr;
			}
		}
	}

	for (int i = 0; i < cnt; ++i) {
		printf("%s ", cnst[i]);
	}
	printf("\n-------------------------\n");

	free(cnst);
	
	return 0;
}
