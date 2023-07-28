//计算圆面积
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    const double PI = 3.14159;
    double area, radius;
    cout << " What is the radius of the circle? \n";
    cin >> radius;
    area = PI * pow(radius,2);// pow 为 幂函数
    cout << " The area is " << area << endl;
    return 0;

}