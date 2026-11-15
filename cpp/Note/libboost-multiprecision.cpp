#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

// print 2^999
int main() {
        using boost::multiprecision::cpp_int;
        using boost::multiprecision::pow;

        cpp_int base;
        unsigned long long exp;

        std::cout << "base: ";
        std::cin >> base;
        std::cout << "exp: ";
        std::cin >> exp;

        cpp_int result = pow(cpp_int(base), exp);
        std::cout << result << std::endl;
        return 0;
}