#include "date.h"
#include <stdio.h>

int main(int argc, char **argv) {
	date_t date = createDate(2024, 12, 31);
	print(date);
	printf("Hello, world!");
}
