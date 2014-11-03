/* File: lab3_3.c */
/* Alexander Ustyuzhanin, IE SO1 group 1, WS14, 24.10.2014 */

// The integral approximation function and the function itself are defined in a separate .c file!
/*
Since the program asks for user input I decided to give you the 3 different step sizes
Case 1: 10 steps
Define the integration limits: 0 30
Define number of segments for integration: 10
Start is 0.000000, end is 30.000000, segments is 10
Approximate: -3.440386e+000

Case 2: 100 steps
Define the integration limits: 0 30
Define number of segments for integration: 100
Start is 0.000000, end is 30.000000, segments is 100
Approximate: -1.256660e+002

Case 3: 1000 steps
Define the integration limits: 0 30
Define number of segments for integration: 1000
Start is 0.000000, end is 30.000000, segments is 1000
Approximate: -1.256304e+002
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "integrateFunc.h"														// header for the file with all the functions

int main()
{
	double start	= 0;														// lower integration limit
	double end		= 30;														// upper intergraion limit
	int segments	= 1000;														// number of integration segments
	
	printf("Define the integration limits: ");									// get the integration limits from the user
	fflush(stdin);
	scanf("%lf %lf", &start, &end);
	printf("Define number of segments for integration: ");						// get the number of segments from the user
	fflush(stdin);
	scanf("%i", &segments);
	printf("Start is %f, end is %f, segments is %i\n", start, end, segments);	// display the recieved values - just for convinience
	printf("Approximate: %e\n", integrateFunc(start, end, segments));			// calculate and display the results
	
	system("pause");
	return 0;
}