#include "misc.h"


#include <iostream>

int TMath::Clamp(int n, int min, int max)
{
    if (n > max) return max;
    else if (n < min) return min;
    else return n;
}

float TMath::Square(float n)
{
    return n * n;
}


std::string TMisc::Capitalize(std::string str)
{
    for (int i = 0; i < str.size(); i++)
        str[i] = toupper(str[i]);

    return str;
}
