#include <cmath>
#include "calculate_b.h"

double calculate_b(double x, double y, double z) {
	// Numerator of the fraction: y * (arctg(z) - π/6)
	double numerator = y * (atan(z) - M_PI/6); // atan is the arctangent, M_PI is the constant π (3.14159...)
	// Знаменатель дроби: |x| + 1/(y² + 1)
	double denominator = fabs(x) + 1.0/(y*y + 1); // fabs is a modulus for double, y*y is y squared
	// Return the result of dividing the numerator by the denominator
	return numerator / denominator;
}
