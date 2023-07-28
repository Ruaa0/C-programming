//因为是int类型；cin读取到非整数时（比如小数点停止读取，但其后内容仍存放于缓存区，会赋值给下一个cin）
#include<iostream>
using namespace std;
int main(){
    int intNum;
    double floatNum;
    cout << "Input a number. ";
    cin >> intNum;
    cout << "Input a second number. ";
    cin >> floatNum;
    cout << "You entered: " << intNum << " and " << floatNum <<endl;
    return 0;
}