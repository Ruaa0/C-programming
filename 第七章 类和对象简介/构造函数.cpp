//使用构造函数来初始化对象的成员变量
//下例为内联构造函数
#include<iostream>
using namespace std;
class Demo{
    public:
        Demo(){ //构造函数
            cout << "Now the constructor is running. \n";
        }
};
int main(){
    cout << "Before construct. "  << endl;
    Demo demoObj;
    cout << "After construct. " << endl;
    return 0;
}
/*
若构造函数不为内联，则应如下所示
Demo::Demo(){
    cout << "balabala" << endl;
}
*/