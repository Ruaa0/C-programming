#include<iostream>
#include<iomanip>
using namespace std;
//定义模板
template <class T>  //使用一个名为T的形参，表示通用数据类型
T square (T number) {
    return number * number;
}
int main(){
    cout << setprecision(5);
    cout << "Enter an integer: ";
    int iValue;
    double dValue;
    cin >> iValue;
    cout << "The square is " << square(iValue);
    cout << "\nEnter a double: ";
    cin >> dValue;
    cout << "The square is " << square(dValue);
    return 0;
}