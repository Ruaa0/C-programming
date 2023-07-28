#include <iostream>
#include "ThisExample.h"
using namespace std;
void Example::setValue (int a) {
    x = a;
};
void Example::printAddressAndValue () {
    cout << "The object at address " << this << " has value " << (*this).x << endl;
}