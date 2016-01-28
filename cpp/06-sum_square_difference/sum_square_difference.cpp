#include <iostream>

int main(int argc, char const *argv[]) {
    const int cap = 100;
    int sum_square = 0, squared_sum = 0;

    for (size_t i = 0; i <= cap; ++i) {
        squared_sum += i * i;
        sum_square += i;
    }

    sum_square *= sum_square;

    std::cout << "sum_square - squared_sum = " << (sum_square - squared_sum) << std::endl;

    return 0;
}