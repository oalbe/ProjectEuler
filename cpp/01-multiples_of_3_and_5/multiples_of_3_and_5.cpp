#include <iostream>
#include <vector>

int main(int argc, char ** argv) {
    unsigned int sum_three, sum_five, total;

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

    total = sum_three + sum_five;

    std::cout << "Total: " << total << std::endl;

    return 0;
}
