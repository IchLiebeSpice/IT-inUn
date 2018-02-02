// lab02.1-InUn.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#define E 2.7
#define FUNC(x) (pow(e,sin(x)))*sin(cos(x))
#define Q(x, n) ((sin((x)*(n+1)))/(sin(n*x)))*(1/(n+1))
int main()
{
	double x = 1, e = 2.7, S = 0.0;
	printf("Enter (x): ");
	int w = scanf_s("%lf", &x);
	if (x <= 1 && x >= 0) {
		double a = sin(x);
		unsigned int n, N = 10;
		for (n = 1; n < N; ++n) {
			S += a;
			a *= Q(x, n);
		}
		double y = FUNC(x), tol = fabs(S - y);
		printf("Sum:\t\t%f\nControl:\t%.7f\nTolerance:\t%.7f\n", S, y, tol);
		getchar();
	}
	else {
		printf("U a Invalid.Plz try again\n");
		getchar();
	}
	getchar();
	return 0;
}