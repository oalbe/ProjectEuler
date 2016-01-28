#include <iostream>
#include <vector>
#include <numeric>

// Greater Common Divisor
template<typename T> T GCD(T, T);
 
// Least Common Multiple 
template<typename T> T LCM(T, T);

int main(int argc, char ** argv) {
    std::vector<long long int> values;

    for (size_t i = 2; i <= 20; ++i)
        values.push_back(i);

    long long int result = std::accumulate(values.begin(), values.end(), 1, LCM<long long int>);

    std::cout << "Result: " << result << std::endl; 

    return 0;
}

template<typename T>
T GCD(T a, T b) {
    a = std::abs(a);
    b = std::abs(b);
 
    // sort in order to have a > b
    if (a < b) {
        T t = a;
        a = b;
        b = t;
    }
 
    if (b == 0)
        return a;
    
    return GCD(b, a % b);
}

template<typename T>
T LCM(T a, T b) {
    return std::abs(a * b)/GCD(a, b);
}