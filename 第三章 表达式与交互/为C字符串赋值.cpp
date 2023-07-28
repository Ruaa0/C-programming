//为 C字符串 赋值，必须使用 strcpy（string cpoy） 函数
//不知道为啥子不行
#include<iostream>
using namespace std;
int main(){
    const int SIZE =12;
    char name1[SIZE], name2[SIZE];
    strcpy(name1, "zhangrui");
    strcpy(name2, "handsome");
    cout << " name1: " << name1 << endl;
    cout << " name2: " << name2 <<endl;
    return 0;
}