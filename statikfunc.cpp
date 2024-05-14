#include <iostream>
#include <string>
using namespace std;

class Mahasiswa 
{
private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pNim) { nim = pNim;  }
    static int getNim() { return nim; }

    Mahasiswa(string pnama)  
    { 
        nama = pnama;
        setID(); 
    }
};

int Mahasiswa::nim = 247;

void Mahasiswa::setID() 
{
    id = ++nim;
}

void Mahasiswa::printAll() 
{
    cout << "ID =" << id << endl;
    cout << "Nama =" << nama << endl;
    cout << endl;
}

int main() 
{
    Mahasiswa mhs1("james s");
    Mahasiswa mhs2("rudy bawel");
    Mahasiswa::setNim(9);   //mengakakses nim melalui static member function "setNim"
    Mahasiswa mhs3("amber heart");
    Mahasiswa mhs4("krean fu");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "akses dari luar object = " << Mahasiswa::getNim() << endl; //Mengakses nim
    system("pause");

    return 0;
}