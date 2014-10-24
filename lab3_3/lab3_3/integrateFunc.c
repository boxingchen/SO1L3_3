#include "integrateFunc.h"

double func(double position)
{
	return pow(cos(position), 5) * exp(sqrt(position));
}

double integrateFunc(double start, double end,  int segments)
{
	int i = 0;
	double result = 0;
	double position = start;
	double step = (double) (end - start)/segments;

	for(i = 0; i < segments; i++)
	{
		result += step * (func(position) + func(position + step))/2;
		position += step;
	}
	return result;
}