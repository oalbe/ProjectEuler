#ifndef UTILS_H
#define UTILS_H

#include "Triplet.h"

typedef unsigned int uint_a;

bool pythagorean(uint_a a, uint_a b, uint_a c);

std::vector<Triplet*> tripletsGenerator(uint_a begin, uint_a end);
std::vector<Triplet*> tripletsFilter(std::vector<Triplet*> triplets, uint_a filter);
std::vector<Triplet*> where(std::map<std::string, uint_a> filter_map);

#endif // UTILS_H