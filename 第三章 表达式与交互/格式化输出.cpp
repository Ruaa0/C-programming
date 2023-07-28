//使用 setw 格式化输出
//setprecision 控制精度
//fixed + setprecision 用来控制小数点位数
//left 和 right ---- 左右对齐(默认右对齐)
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    //setw
    int num1 = 2897, num2 = 111, num3 = 1,
        num4 = 22, num5 = 8888, num6 = 444;
    cout << setw(6) << num1 << setw(6) << num2 << endl;
    cout << setw(6) << num3 << setw(6) << num4 << endl;
    cout << setw(6) << num5 << setw(6) << num6 << endl;
    //setprecision
    double num7 = 132.654, num8 = 57.498;
    double quotient = num7 / num8;
    cout << quotient << endl;
    cout << setprecision(5) << quotient << endl;
    cout << setprecision(4) << quotient << endl;
    cout << setprecision(3) << quotient << endl;
    cout << setprecision(2) << quotient << endl;
    //fixed + setprecision
    cout << fixed << setprecision(5) << quotient << endl;
    cout << fixed << setprecision(4) << quotient << endl;
    cout << fixed << setprecision(3) << quotient << endl;
    cout << fixed << setprecision(2) << quotient << endl;
    //left
    cout << left << setw(6) << num1 << setw(6) << num2 << endl;

    return 0;
}