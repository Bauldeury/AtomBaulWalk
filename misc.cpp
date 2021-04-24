#include "misc.h"


#include <iostream>

int TMath::Clamp(int n, int min, int max) //Clamp vient du namespace Tmath => Tmath::Clamp
{
    if (n > max) return max;
    else if (n < min) return min;
    else return n;
}

float TMath::Square(float n)
{
    return n * n;
}


std::string TMisc::Capitalize(std::string str)//T:tourist, Misc: divers, idem ici pour string qui vient de std
{                                          //string& str: prend en référence la variable str => modifie la variable str au lieu de travailler sur une copie de la vaible str
    for (int i = 0; i < str.size(); i++)
        str[i] = toupper(str[i]);

    return str;
}
