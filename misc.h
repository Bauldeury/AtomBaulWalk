#ifndef MISC_H_INCLUDED
#define MISC_H_INCLUDED

#include <iostream>

namespace TMath
{
    /// Returns a clamped number.
    int Clamp(int n, int min, int max);

    /// Returns the square of the number.
    float Square(float n);
}

namespace TMisc
{
    /// Return a capitalized string
    std::string Capitalize(std::string str);
}

#endif // MISC_H_INCLUDED
