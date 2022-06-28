#include <iostream>

using namespace std;



int main(int argc, char const *argv[])
{
    
    try {
        int age = 20;
        if (age >= 27) {
            cout << "Akses masuk, umur kamu udah tua" << endl; 
        } else {
            // bisa pakai yan ini
            // throw (age);
            // atau yan ini
            throw 578;

        }
    }

    catch (int number) {
        cout << "akses denied, you must be at least 20 years old \n";
        cout << "Umur nya adalah: " << number << " tahun" << endl;
    }

    return 0;
}

