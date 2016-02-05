#include "utils.h"

bool pythagorean(uint_a a, uint_a b, uint_a c) {
	uint_a a_sqr = a * a;
	uint_a b_sqr = b * b;
	uint_a c_sqr = c * c;
	
	if ((a_sqr + b_sqr) == c_sqr) {
		return true;
	}
	
	return false;
}