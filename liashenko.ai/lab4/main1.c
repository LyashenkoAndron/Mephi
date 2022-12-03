#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <readline/readline.h>


int main() {
	int cnt = 0;
	char *line = readline("Enter your string ");
	
	char *cnst = NULL;
	//char *vr_line = NULL;
	int min = 100;
	//int ind_for = 0;
	
	for (long unsigned int i = 0; i < strlen(line) + 1; ++i) {
		if (line[i] != ' ') {
			cnt += 1;
		}
		else {
			if (cnt < min)
				min = cnt;
			cnt = 0;
		}
	}


	cnt = 0;
	int in_start = 0, in_end;
	int schetcik = 0;
	for (long unsigned int i = 0; i < strlen(line); ++i) {
		if (line[i] != ' ') {
			cnt += 1;
			in_end = i;
		}
		else {
			if (cnt == min) {
			
				int x =  cnt + strlen(line) + 2;
				printf("%d\n", x);
				line = realloc(line, x * sizeof(int));

				//сдвиг массива для записи
				for (int j = x; j >= min; --j) {
					line[j] = line[j - min];
				}
				
				for (int j = in_start + min; j <= in_end + min; ++j) {
					line[schetcik] = line[j];
					schetcik += 1;
				}

				for (int j = x - 1; j >= min)

				printf("%s\n", line);
				
			}
			if (line[i] == ' ' && line[i + 1] != ' ') {
				in_start = i + 1;
			}
			cnt = 0;
		}
	}
}
