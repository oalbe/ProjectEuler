/**
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * 
 * What is the largest prime factor of the number 600851475143 ?
 */
#include <iostream>
#include <vector>


int main(int argc, char ** argv) {
    long long int number = 600851475143;
    
    std::vector<int> factors;
    
    size_t i = 2;
    while (i <= number) {
        if (0 == (number % i)) {
            factors.push_back(i);
            
            number = number / i;
            i = 1;
        }
        
        ++i;
    }
    
    std::cout << "Largest prime factor: " << factors[factors.size() - 1] << std::endl;

    return 0;
}