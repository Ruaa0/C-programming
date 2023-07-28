//此程序演示内联函数，即类函数定义在类声明中时
//当类函数比较简短时，可以用内联函数来定义
#include<iostream>
#include<cmath>
using namespace std;
//定义Circle类
class Circle{
    private:
        double radius;  //半径
    public:
        void setRadius(double r){   //像这种改变成员变量的函数叫做 设置器 或者 set函数 或者 setter函数
            radius = r;
        }
        double getArea(){   //像这种使用类变量的值但不改变他的函数叫做 访问器 或者 get函数 或者 getter函数 或者 读取器
            return 3.14 * pow(radius, 2);
        }
};
int main(){
    //定义俩 Circle 对象
    Circle circle1, circle2;
    circle1.setRadius(1);
    circle2.setRadius(2.5);
    cout << "The area of circle1 is " << circle1.getArea() << endl;
    cout << "The area of circle2 is " << circle2.getArea() << endl;
    return 0;
}