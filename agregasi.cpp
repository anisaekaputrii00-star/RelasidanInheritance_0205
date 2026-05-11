#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main()
{
    Ibu* varIbu = new Ibu("rani");
    Ibu* varIbu2 = new Ibu("sari");
    Ibu* varAnak1 = new Ibu("tono");
    Ibu* varAnak2 = new Ibu("tiara");
    Ibu* varAnak3 = new Ibu("dini");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);
    varIbu2->tambahAnak(varAnak3);
    
}
    