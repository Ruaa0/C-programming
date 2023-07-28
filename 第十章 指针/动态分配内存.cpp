//记得 delete
/*
    delete [] sales;
    sales = 0;
or
    delete iptr
    iptr = nullptr;
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double *sales,
            total = 0.0,
            average;
    int numDays;
    cout << "How many days of sales figures do you wish to process? ";
    cin >> numDays;
    sales = new double[numDays];
    cout << "Enter the sales figures below: \n";
    for (int count = 0; count < numDays; count++){
        cout << "Day " << (count + 1) << ": ";
        cin >> sales[count];
    }
    for (int count = 0; count < numDays; count++){
        total += sales[count];
    }
    average = total / numDays;
    cout << setprecision(2) << fixed << showpoint;
    cout << "\n\nTotal Sales: $" << total << endl;
    delete [] sales;
    sales = nullptr;
    return 0;
}