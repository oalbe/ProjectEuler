#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

struct PrimeTest {
    PrimeTest(int val): value(val) {}
    bool operator()(int test) const  { return value%test == 0;}

    int value;
};

int main(int argc, const char ** argv) {
    std::vector<int> primes;
    int primeTest = 2; 
    
    size_t i = 0, maxCount = 10000;
    while (i <= maxCount) {
        // There is a loop hidden inside here.
        if (std::find_if(primes.begin(), primes.end(), PrimeTest(primeTest)) == primes.end()) {
            primes.push_back(primeTest);
            ++i;
        }

        ++primeTest;
    }

    for (size_t i = 0; i < primes.size(); ++i)
        std::cout << (i + 1) << ": " << primes[i] << std::endl;
}