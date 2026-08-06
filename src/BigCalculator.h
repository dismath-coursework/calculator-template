#pragma once
#include <vector>
#include <string>

class BigCalculator
{
public:
    BigCalculator();
    bool normalSize; // true, когда нет превышения 8 разрядов 

    std::vector<char> add(const std::vector<char>& num1, const std::vector<char>& num2);
    std::vector<char> subtract(const std::vector<char>& num1, const std::vector<char>& num2);
    std::vector<char> multiply(const std::vector<char>& num1, const std::vector<char>& num2);
    std::string division(const std::vector<char>& num1, const std::vector<char>& num2);
    std::string pow(const std::vector<char>& num1, const std::vector<char>& num2);
    std::vector<char> gcd(const std::vector<char>& num1, const std::vector<char>& num2);
    std::vector<char> lcm(const std::vector<char>& num1, const std::vector<char>& num2);
};