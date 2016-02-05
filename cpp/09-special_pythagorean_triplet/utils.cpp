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

#include "Triplet.h"

std::vector<Triplet*> tripletsGenerator(uint_a begin, uint_a end) {
	std::vector<Triplet*> triplets;
	
	// Generates an array of ALL possible triplets
	// TODO: Optimize this ugly thing. Seriously.
	for (uint_a a = begin; a < end; ++a) {
		for (uint_a b = a; b < end; ++b) {
			for (uint_a c = b; c < end; ++c) {
				if (pythagorean(a, b, c)) {
					triplets.push_back(new Triplet(a, b, c));
				}
			}
		}
	}
	
	return triplets;
}

std::vector<Triplet*> tripletsFilter(std::vector<Triplet*> triplets, uint_a filter) {
	std::vector<Triplet*> filteredTriplets;
	
	size_t tripletsLength = triplets.size();
	for (size_t i = 0; i < tripletsLength; ++i) {
		if (triplets[i]->sum() == filter) {
			filteredTriplets.push_back(triplets[i]);
		}
	}
	
	return filteredTriplets;
}

std::vector<Triplet*> where(std::map<std::string, uint_a> filter_map) {
	if (filter_map.find("maxFactor") == filter_map.end()) {
		return std::vector<Triplet*>();
	}
	
	size_t startingPoint = 2;
	if (filter_map.find("minFactor") != filter_map.end()) {
		startingPoint = filter_map["minFactor"];
	}
	
	std::vector<Triplet*> generatedTriplets = tripletsGenerator(
		startingPoint, filter_map["maxFactor"] + 1
	);

	// Filters triplets on sum if needed
	if (filter_map.find("sum") != filter_map.end()) {
		return tripletsFilter(generatedTriplets, filter_map["sum"]);
	}
	
	return generatedTriplets;
}