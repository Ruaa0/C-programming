//浮点数存在缺少精度或舍入误差，导致比较浮点数时可能导致错误结果。
#include<iostream>
using namespace std;
int main(){
    double result = .666667 * 6.0;
    cout << " result: " << result << endl; //输出4
    if (result == 4.0 )
        cout << " result DOES equal 4.0! " << endl; //输出这条
    else
        cout << " result DOES NOT equal 4.0! " << endl;
    return 0;

}