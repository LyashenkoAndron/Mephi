#include "func.h"


void make_array_words(char ***arr, char **line, int *cnt) {
	char *del_word = strtok(*line, " ");
	while (del_word != NULL) {
		(*arr) = realloc((*arr), (*cnt + 1) * sizeof(**arr));
		(*arr)[*cnt] = del_word;
		*cnt += 1;
		del_word = strtok(NULL, " ");
	}
	free(del_word);
}


void sort(char ***arr, int cnt) {
	for (int i = cnt - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			if (strlen((*arr)[j]) > strlen((*arr)[j + 1])) {
				char *vr = (*arr)[j];
				(*arr)[j] = (*arr)[j + 1];
				(*arr)[j + 1] = vr;
			}
		}
	}
}


void print_array(char **arr, int cnt) {
	printf("\n---------------------------\n");
	for (int i = 0; i < cnt; ++i) {
		printf("%s ", arr[i]);
	}
	printf("\n---------------------------\n");
}
