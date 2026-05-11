#include <iostream>
#include <string>
using namespace std;

class user{
    public:
    static int globalId;
    int id;
    string nama;
    string email;

    User(string nama, string email)
    {
        this->nama = nama;
        this->email = email;
        id = generateId();
    }
}