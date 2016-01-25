// TODO: Might use some optimization.
#include <iostream>

int main (int argc, char ** argv) {
    unsigned int current = 1, precedent = 1, temp = 0, sum = 0;

    while (current <= 4000000) {
        temp = current + precedent;
        precedent = current;
        current = temp;

        if ((current % 2) == 0) {
            std::cout << "Even: " << current << std::endl;
            sum += current;
        } else {
            std::cout << "Odd:  " << current << std::endl;
        }
    }

    std::cout << "Total: " << sum << std::endl;

    return 0;
}