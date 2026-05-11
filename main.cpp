#include "ibu.h"

int main()
{
    anak a1("Budi");
    ibu i1("Siti");

    i1.tambahAnak(&a1);
    i1.cetakAnak();

    return 0;
}