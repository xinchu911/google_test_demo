#include "demo.h"

std::string demo::greaterThan0String(float a)
{
    std::string t = "True";
    std::string f = "False";
    return a > 0 ? t : f;
}