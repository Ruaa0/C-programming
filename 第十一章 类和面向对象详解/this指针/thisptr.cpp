#include <iostream>
#include "ThisExample.h"
#include "ThisExample.cpp"
using namespace std;

int main () {
    Example ob1 (10), ob2 (20);
    cout << "Addresses of objects are " << &ob1 << " and " << &ob2 << endl;
    ob1.printAddressAndValue();
    ob2.printAddressAndValue();
    return 0;
}