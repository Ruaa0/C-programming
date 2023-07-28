//当对象被销毁时，析构函数被自动调用
#include<iostream>
using namespace std;
class Demo{
    public:
        Demo();
        ~Demo();
};
Demo::Demo(){
    cout << "An object has just been defined. \n";
}
Demo::~Demo(){  //无参，且不能重载
    cout << "Now the destructor is running. \n";
}
int main(){
    Demo demoObj;
    cout << "The object now exists. \n";
    return 0;
}