// Connect the math library (to use sqrt, sin, etc.)
#include <cmath>
// Connect our own header file
#include "calculate_a.h"

// Implementation of the calculate_a function
double calculate_a(double x, double y) {
	//Calculate the exponent of the degree: the cube root of the modulus of x
	double exponent = cbrt(fabs(x)); // cbrt - cube root, fabs - module for double
	// Elevate y to the calculated degree, add the results and return
	return pow(y, exponent) + sin(y - 3); // pow - power
}
