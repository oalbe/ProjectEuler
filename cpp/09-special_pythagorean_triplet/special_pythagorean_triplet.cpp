/**
 * A Pythagorean triplet is a set of three natural numbers, a < b < c,
 * for which, a2 + b2 = c2
 * 
 * For example, 32 + 42 = 9 + 16 = 25 = 52.
 * 
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 */ 
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "Triplet.h"
#include "utils.h"

int main(int argc, char const *argv[]) {
	std::map<std::string, uint_a> filter_map = {
		{"sum", 1000},
		{"maxFactor", 1000}
	};
	
	std::vector<Triplet*> triplets = where(filter_map);
	
	size_t tripletsLength = triplets.size();
	for (size_t i = 0; i < tripletsLength; ++i) {
		std::cout << triplets[i]->product() << std::endl;
	}
    
	return 0;
}