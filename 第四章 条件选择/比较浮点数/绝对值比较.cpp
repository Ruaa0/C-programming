//通常用取绝对值的方法来防止浮点数比较出现错误
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double result = .666667 * 6.0;
    cout << " result = " << result << endl;
    if (abs(result - 4.0) < .0001)
        cout << " result DOES equal 4.0" <<endl;
    else
        cout << " result DOES NOT equal 4.0" << endl;
    return 0;
}