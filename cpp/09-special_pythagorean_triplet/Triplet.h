#ifndef TRIPLET_H
#define TRIPLET_H

#include "utils.h"

#include <vector>
#include <map>


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

std::vector<Triplet*> tripletsGenerator(uint_a begin, uint_a end);
std::vector<Triplet*> tripletsFilter(std::vector<Triplet*> triplets, uint_a filter);
std::vector<Triplet*> where(std::map<std::string, uint_a> filter_map);

#endif // TRIPLET_H