#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv) {
	volatile int modified;
	char buffer[64]; 

	modified = 0;
	fgets(buffer, sizeof(buffer), stdin);
	if (modified != 0) {
		printf("you have changed the 'modified' variable\n");
	}
	else {
		printf("Try again?\n");
	}

}
