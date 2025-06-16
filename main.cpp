// Connect standard I/O
#include <iostream>
// For output manipulators (setprecision)
#include <iomanip>
// Plugging in our function declarations
#include "calculate_a.h"
#include "calculate_b.h"

int main() {
	// Initial data from the table (I'm doing option 2 (two))
	double x = -0.62;
	double y = 0.82;
	double z = 25.0;

	// Calculate A and B using our functions
	double a = calculate_a(x, y);
	double b = calculate_b(x, y, z);
	
	// Customizing the output:
	// fixed - fixed record
	// setprecision(6) - 6 decimal places
	std::cout << std::fixed << std::setprecision(6);

	// Displaying the results
	std::cout << "For x = " << x << ", y = " << y << ", z = " << z << ":\n";
	std::cout << "A = " << a << "\n";
	std::cout << "B = " << b << "\n";
	
	// Return 0 - sign of successful completion
	return 0;
}
