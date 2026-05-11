#ifndef IBU_H
#define IBU_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class anak
{
public:
    string nama;

    anak(string pNama) : nama(pNama)
    {
        cout << "Anak \"" << nama << "\" ada\n";
    }

    ~anak()
    {
        cout << "Anak \"" << nama << "\" tidak ada\n";
    }
};

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
    }

    void tambahAnak(anak* pAnak)
    {
        daftar_anak.push_back(pAnak);
    }

    void cetakAnak()
    {
        cout << "Daftar Anak dari Ibu \"" << this->nama << "\":\n";

        for (auto& a : daftar_anak)
        {
            cout << a->nama << "\n";
        }

        cout << endl;
    }
};

#endif