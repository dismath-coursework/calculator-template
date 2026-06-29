#pragma once
#include <vector>
#include <string>

class BigCalculator
{
public:
    BigCalculator();

    // или просто перечислить сигнатуры методов, которые должны быть реализованы студентом:
    // add, subtract, multiply, division, pow, gcd, lcm
    // принимают (const std::vector<char>&, const std::vector<char>&) и возвращают std::string или std::pair<std::string, std::string> для division
    std::vector<char> add(const std::vector<char>& num1, const std::vector<char>& num);
    std::vector<char> subtract(const std::vector<char>& num1, const std::vector<char>& num2);
    std::vector<char> multiply(const std::vector<char>& num1, const std::vector<char>& num2);
    std::string division(const std::vector<char>& num1, const std::vector<char>& num2);
    std::string pow(const std::vector<char>& num1, const std::vector<char>& num2);
    std::vector<char> gcd(const std::vector<char>& num1, const std::vector<char>& num2);
    std::vector<char> lcm(const std::vector<char>& num1, const std::vector<char>& num2);
};