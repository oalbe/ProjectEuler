#ifndef TRIPLET_H
#define TRIPLET_H

#include <vector>
#include <map>


typedef unsigned int uint_a;

class Triplet {
	uint_a first, second, third;
public:
	Triplet(uint_a f, uint_a s, uint_a t): first(f), second(s), third(t) {}
	
	uint_a sum() const {
		return first + second + third;
	}
	
	uint_a product() const {
		return first * second * third;
	}
};

#endif // TRIPLET_H