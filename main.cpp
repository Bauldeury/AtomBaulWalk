#include <iostream>
#include "misc.h"
#include "Character.h"
using namespace std;

int main()
{
    cout << "**********************" << endl;
    cout << "**** AtomBaulWalk ****" << endl;
    cout << "**********************" << endl;
    //return 0;

    /*float n = 16;
    cout << TMath::Square(n)<< endl;
    cout << n;*/
    string pepere = "pepere";
    Character character(pepere);

    character.log(); //character.name => name du type structuré character
}
