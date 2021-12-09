#pragma once
#include <string>

class demo
{
public:
    int add(int a, int b) { return a + b; };
    float multiply(float a, float b) { return a * b; };
    bool greaterThan0(float a) { a > 0 ? true : false; };
    std::string greaterThan0String(float a);
};
