#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv) {
	volatile int modified;
	char buffer[64]; 

	modified = 0;
	gets(buffer);
	if (modified != 0) {
		printf("you have changed the 'modified' variable\n");
	}
	else {
		printf("Try again?\n");
	}

}

// нам нужно сделать так, чтобы modified стал != 0
// нужно это сделать так
// при записи строчки нужно вписать более 64 символов, чтобы мы изменили modified (также его значение) =>
// => если мы впишем больше значений (чем 64), то в памяти затронется переменная modified, которая попросту изменит ее (сделает отличной от 0)
// программа сделана чуть по другому, тк в инзначальной форме она попросту отказывается работать 
// 
