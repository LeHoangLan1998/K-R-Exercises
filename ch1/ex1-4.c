#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {

	float fahr, celsius;
	
	printf("-------------------------------------------------\n");
	printf("|Table for conversion from Celsius to Fahrenheit|\n\n");

	for (celsius = LOWER; celsius <= UPPER; celsius += STEP) {
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%3.0f %6.0f\n", celsius, fahr);
	}

	return 0;
}
