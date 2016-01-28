/**
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, 
 * we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * 
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */
#include <iostream>

int main(int argc, char ** argv) {
    unsigned int sum_three, sum_five;

    sum_three = sum_five = 0;
    for (size_t i = 0; i < 1000; ++i) {
        if ((i % 3) == 0) {
            std::cout << "3: " << i << std::endl;
            sum_three += i;
        } else if ((i % 5) == 0) {
            std::cout << "5: " << i << std::endl;
            sum_five += i;
        }
    }

    unsigned int total = sum_three + sum_five;

    std::cout << "Total: " << total << std::endl;

    return 0;
}
