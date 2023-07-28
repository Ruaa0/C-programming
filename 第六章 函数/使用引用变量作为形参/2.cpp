#include<iostream>
using namespace std;
 void getNum(int &);
 int doubleNum(int);    //函数声明时先不给出形参名字
 int main(){
    int value;
    getNum(value);
    value = doubleNum(value);
    cout << "That value doubled is " << value << endl;
    return 0;
 }

void getNum(int &userNum){  //用户输入数字
    cout << "Enter a number: ";
    cin >> userNum;
}
int doubleNum(int number){
    return number*2;
}


