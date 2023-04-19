#include <stdio.h>

int main() {
	
	int c;

	if ((c = getchar()) == EOF) {
		printf("%d\n", c);
	}

	return 0;
}
