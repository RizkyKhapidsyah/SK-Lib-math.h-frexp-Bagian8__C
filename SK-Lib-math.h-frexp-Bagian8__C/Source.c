// crt_frexp.c
// This program calculates frexp( 16.4, &n )
// then displays y and n.

#include <math.h>
#include <stdio.h>
#include <conio.h>

/*	Source by Microsoft
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main(void) {
	double x, y;
	int n;

	x = 16.4;
	y = frexp(x, &n);
	printf("frexp( %f, &n ) = %f, n = %d\n", x, y, n);

	_getch();
	return 0;
}