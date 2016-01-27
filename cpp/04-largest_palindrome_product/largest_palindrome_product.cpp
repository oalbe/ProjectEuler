#include <iostream>
#include <string>
//#define DEBUG

bool isPalindrome(int number) {
    std::string stringized_number = std::to_string(number);

    int sn_length = stringized_number.length(),
        sn_half_length = sn_length / 2;

    sn_length -= 1;

    #ifdef DEBUG
    std::cout << "stringized_number: " << stringized_number << std::endl
              << "sn_length:         " << sn_length << std::endl
              << "sn_half_length:    " << sn_half_length << std::endl;
    #endif

    for (size_t i = 0; i < sn_half_length; ++i) {
        #ifdef DEBUG
        std::cout << "stringized_number[" << i << "]: " << stringized_number[i] << std::endl
                  << "stringized_number[" << (sn_length - i) << "]: " << stringized_number[sn_length - i] << std::endl;
        #endif

        if (!(stringized_number[i] == stringized_number[sn_length - i]))
            return false;
    }

    return true;
}

int main(int argc, char ** argv) {
    unsigned int first_factor, second_factor, max_palindrome, current_product;

    first_factor = second_factor = 999;
    max_palindrome = current_product = 0;

    for (unsigned int i = first_factor; i > 0; --i) {
        for (unsigned int j = second_factor; j > 0; --j) {
            current_product = i * j;
            
            if (current_product < max_palindrome) {
                --second_factor;
                break;
            }

            if (isPalindrome(current_product))
                if (current_product > max_palindrome)
                    max_palindrome = current_product;
        }
    }

    std::cout << "Largest palindrome: " << max_palindrome << std::endl;

    #ifdef DEBUG
    std::cout << isPalindrome(9999) << std::endl
              << isPalindrome(224) << std::endl
              << isPalindrome(12345) << std::endl
              << isPalindrome(665566) << std::endl;
    #endif

    return 0;
}