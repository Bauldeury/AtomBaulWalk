#ifndef MISC_H_INCLUDED
#define MISC_H_INCLUDED

#include <iostream>

namespace TMath
{
    /// Constrains n value.
    void Clamp(int& n, const int& min, const int& max);

}

namespace TMisc
{
    /// Modifies the inputed string.
    void Capitalize(std::string& str);
}

#endif // MISC_H_INCLUDED
