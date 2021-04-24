#include "misc.h"


#include <iostream>

void TMath::Clamp(int& n, const int& min, const int& max)
{
    if (n > max) n = max;
    else if (n < min) n = min;
}


void TMisc::Capitalize(std::string& str)
{
    for (int i = 0; i < str.size(); i++)
        str[i] = toupper(str[i]);
}
