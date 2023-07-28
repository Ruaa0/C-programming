#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct PayRoll
{
    int empNumber;
    string name;
    double hours, payRate;
};  //记得加分号
int main(){
    PayRoll employee;
    double grossPay;
    cout << "Enter the employee's number: ";
    cin >> employee.empNumber;
    cout << "Enter the employee's name: ";
    cin.ignore();   //忽略缓冲区字符，使用 cin.ignore() 是个好习惯
    getline(cin, employee.name);
    cout << "Hours worked this week: ";
    cin >> employee.hours;
    cout << "Employee's hourly pay rate: ";
    cin >> employee.payRate;
    grossPay = employee.hours * employee.payRate;
    cout << "\nHere is the employee's payroll data: \n";
    cout << "Name:           " << employee.name <<endl;
    cout << "Employee number:" << employee.empNumber << endl;        
    cout << "Hours worked:   " << employee.hours << endl;
    cout << "Hours pay rate: " << employee.payRate << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Gross pay:     $" << grossPay << endl;
    return 0;
}
