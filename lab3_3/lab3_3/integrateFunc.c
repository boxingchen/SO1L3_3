#include "integrateFunc.h"

double func(double position)											// this computes the function that we're integrating (for convinience)
{
	return pow(cos(position), 5) * exp(sqrt(position));
}

double integrateFunc(double start, double end,  int segments)			// this computes the approximate integral value
{
	int i = 0;															// cycle iterator
	double result = 0;													// integral value
	double position = start;											// starting position (function argument)
	double step = (end - start)/segments;								// base of the trapezium

	for(i = 0; i < segments; i++)										// this loop calculates the integral
	{
		result += step * (func(position) + func(position + step))/2;
		position += step;
	}
	return result;
}