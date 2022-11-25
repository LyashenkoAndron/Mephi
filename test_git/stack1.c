#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
	volatile int modified;
	char buffer[64];

	if (argc == 1) {
		errx(1, "Please specify an argument\n");
		//errx - честно не очень понял, но если вкратце то функция смотрит выдает ошибку, если значение не равно NULL UwU
	}

	modified = 0;
	strcpy(buffer, argv[1]);

	if (modified == 0x61626364) {
		printf("you have correctly got the variable  to the right value\n");
	}
	else {
		printf("Try again, you got 0x%08x\n", modified);
	}
}

// по поводу stack 1
// используем табличку ascii (0x означает 16-ую сс) (символы 61 - A, 62 - B, 63 - C, 64 - D)
// приступим к самой сложный на мой взгляд части
// используя знания (приобретенные в течении послених 5 минут) мы узнаем (little Endian Format)
// когда у нас записывается адрес, то все значение переворачиваются и записываются в обратном порядке
// => если у нас дано 0x61626364, то в 16 представлении будет выглядеть так 0x64636261
// => нам необходимо сделать так, чтобы modified имел эти значения
// по табл аски мы узнаем, что 0x64636261 = 'dcba'
// => остается переполнить buffer, чтобы 'залесть' на modified и записать в него необходимое значения
