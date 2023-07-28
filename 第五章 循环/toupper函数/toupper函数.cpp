//toupper函数的用法
//将小写字母转为对应大写字母的 ascll码 ， 若被赋值后打印，则仍打印（大写）字符本身
#include<iostream>
using namespace std;
int main(){
    char letter1, letter2, letter3;
    letter1 = toupper('?');
    cout << letter1;    //打印 ？
    letter2 = toupper('A');
    cout << letter2;    //打印 A
    letter3 = toupper('b');
    cout << letter3;    //打印 B
    cout << toupper('c');   //打印 67 ， 为C的ascll码
}