#ifndef IBU_H
#define IBU_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class ibu
{
public:
    string nama;
    vector<anak*> daftar_anak;

    ibu(string pNama) : nama(pNama)
    {
        cout << "Ibu \"" << nama << "\" ada\n";
    }

    ~ibu()
    {
        cout << "Ibu \"" << nama << "\" tidak ada\n";
    };

    void tambahAnak(anak* pAnak);
    void cetakAnak();
};

void Ibu::cetakAnak(anak* pAnak)
{
    daftar_anak.push_back(pAnak);
}

void Ibu::cetakAnak(){
    cout << "Daftar Anak dariIbu \"" << this->nama << "\":\n";
    for (auto& a : daftar_anak)
    {
        cout << a->nama << "\n";
    }
    cout << endl;
}

#endif

       

    

