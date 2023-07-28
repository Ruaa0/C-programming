//无论正在执行的是哪个函数或者控制机制， exit() 函数都将导致程序终止
//当程序有必要在main函数之外终止时，可以使用 exit() 函数
//该函数绕过了正常程序逻辑流程，应当谨慎使用
#include<iostream>
#include<cstdlib>   //使用 exit 需包含这个库， 之前遇到的随机数也需要包含该库
using namespace std;
void someFunction();
int main(){
    someFunction();
    cout << "This function has not been stopped. ";
    return 0;
}
void someFunction(){
    cout << "This program will be stopped.\n ";
    exit(0);
    cout << "This program has not been stopped. ";
}