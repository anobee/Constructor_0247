#include <iostream>
using namespace std;

class angka{
    private:
        int *arr;
        int panjang;
    public :
        angka(int);
        ~angka();
        void cekData();
        void isiData();
};

angka::angka(int i){
    panjang = i;
    arr = new int[i];
    isiData ();
    delete[]arr;
    cout << "Alamat array sudah dilepaskan" << endl;
}

void angka::cetakData(){
    for (int i=1;i<=panjang;i++){
        cout <<i"="<<arr[i]<<endl;
    }
}

void angka::isiData(){
    for(int i=1;i<=panjang;i++){
        cout << "=" << ;
        cin >> arr[i];

    }
    cout << endl;
}
