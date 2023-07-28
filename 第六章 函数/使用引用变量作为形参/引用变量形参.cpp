#include<iostream>
using namespace std;
void doubleNum(int &refVar);   //函数需要在调用之前声明
int main(){
    int value = 4;
    cout << "In main, value is " << value << endl;
    cout << "Now calling doubleNum... " << endl;
    doubleNum(value);
    cout << "Now back in main, value is " << value <<endl;
    return 0;
}
void doubleNum (int &refVar){
    refVar *= 2;
}
