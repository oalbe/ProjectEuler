/**
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 * 
 * Find the sum of all the primes below two million.
 */
// NOTE: The compiled thing took like 10 minutes to execute.
#include <iostream>
#include <map>
#include <vector>


long long int compute_sum(int*, size_t);

int main(int argc, const char **argv) {
    size_t limit = 2000000;
    int* sequence = new int[limit];
    
    sequence[0] = 1;
    sequence[1] = 1;
    for (size_t i = 2; i < limit + 1; ++i) {
        if (1 == sequence[i]) {
            continue;
        }
        
        for (size_t j = i + 1; j < limit + 1; ++j) {
            if (0 == (j % i)) {
                sequence[j] = 1;
            }
        }
    }
    
    std::cout << "The sum is: " << compute_sum(sequence, limit) << "\n";
    
    delete[] sequence;
    
    return 0;
}

long long int compute_sum(int* seq, size_t seq_size) {
    long long int sum = 0;

    for (size_t i = 0; i < seq_size; ++i) {
        if (0 == seq[i]) {
            sum += i;
        }
    }
    
    return sum;
}