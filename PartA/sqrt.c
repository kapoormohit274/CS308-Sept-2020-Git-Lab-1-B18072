#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>
int main(int argc, char* argv[]) {
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}
	int input = atoi(argv[1]);	
	if(input < 0){
		double complex no = input + 0.0;
		double complex sqt = csqrt(no);
		printf("NEGSUPPORT: %.2f + %.2fi\n", creal(sqt), cimag(sqt));
	}
	else {
		printf(" Sqrt of %d is: %f\n",input,sqrt(input));
		printf("DEBUG: End of program. Exiting.");
	}
	return(0);
} // end main
