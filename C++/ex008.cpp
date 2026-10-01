#include <iostream>
using namespace std;

int main()
{
    for(int numero = 1; numero <= 5; numero++){
        for(int mult = 1; mult <= 10; mult++){
            cout << numero << " x " << mult << " = " << numero * mult << endl;
        }
    }
    return 0;
}