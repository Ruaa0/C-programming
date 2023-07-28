#include <iostream>
#include <iomanip>
using namespace std;
const int SIZE = 6;
const double payRates[SIZE] = {18.55, 17.45, 12.85, 14.97, 10.35, 10.89};
void displayPayRates(const double *rates, int size){
    cout << setprecision(2) << fixed << showpoint;
    for (int count = 0; count < size; count++){
        cout << "Pay rate for employee " << (count + 1) << " is $" << *(rates + count) << endl;
    }
}
int main(){
    displayPayRates(payRates, SIZE);
}