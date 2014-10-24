/* File: lab3_3.c */
/* Alexander Ustyuzhanin, IE SO1 group 1, WS14, 24.10.2014 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "integrateFunc.h"

int main()
{
	double start	= 0;
	double end		= 30;
	int segments	= 1000;
	
	printf("Define the integration limits: ");
	fflush(stdin);
	scanf("%lf %lf", &start, &end);
	printf("Define number of segments for integration: ");
	fflush(stdin);
	scanf("%i", &segments);
	printf("Start is %f, end is %f, segments is %i\n", start, end, segments);
	printf("Approximate: %f\n", integrateFunc(start, end, segments));
	
	system("pause");
	return 0;
}