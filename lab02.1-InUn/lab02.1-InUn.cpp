// lab02.1-InUn.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#define FUNC(x) exp(sin(x))*sin(cos(x))
#define Q(x, n) sin((x)*((n)+1))/sin((n)*(x))/((n)+1)

int main()
{
	double x = 1, S = 0.0, a;
	printf("Enter (x):(from 0 to 1) ");
	int w = scanf_s("%lf", &x);
	if (x <= 1 && x >= 0) {
		a = sin(x);
		unsigned int n, N = 20;
		for (n = 1; n <= N; ++n) {
			S += a;
			a *= Q(x, n); 
		}
		double y = FUNC(x), tol = fabs(S - y);
		printf("Sum:\t\t%f\nControl:\t%.7f\nTolerance:\t%.7f\n", S, y, tol);
	}
	else {
		printf("U a Invalid.Plz try again\n");
	}
	getchar();
	return 0;
}