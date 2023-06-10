// testDLL.cpp
#include "pch.h"
//#include "stdafx.h"
#include <stdexcept>

extern "C"
{
    __declspec(dllexport) int Add(int a, int b)
    {
        if (a == 0 || b == 0)
            throw std::invalid_argument("Neither argument can be zero.");

        return a + b;
    }
}
