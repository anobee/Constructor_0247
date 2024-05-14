#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
    private:
        static int nim;
    public:
        int id;
        string nama;

        void setID();
        void printAll();

        static void setNim (int pNim) {nim = pNim;}
        static int getNIm() {return nim;}

        mahasiswa (string pnama)
        {
            nama = pnama;
            setID();
        }
};

int mahasiswa::nim = 0;

void mahasiswa::setID()
{
    id == ++nim;
}

void mahasiswa::printAll()
{
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main()
{
    mahasiswa mhs1("James");
    mahasiswa mhs2("pengkor");
    mahasiswa::setNim(247);
    mahasiswa mhs3("Richard");
    mahasiswa mhs4("baggio");

    mhs1.printAll();
    
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "akses dari luar objek = " << mahasiswa::getNIm() << endl;
    return 0;
}