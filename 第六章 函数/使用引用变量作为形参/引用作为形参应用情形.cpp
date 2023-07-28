//引用形参的3种常见情形
//1.函数输入的数据只需要被调用函数知道
//2.函数必须更改调用他的函数中的现有值
//3.需要将文件流对象传递给函数
//以下程序对用户输入的两个数字进行排序
#include<iostream>
using namespace std;
void getNums(int &, int &);
void orderNums(int &, int &);
int main(){
    int small, big;
    getNums(small, big);
    orderNums(small, big);
    cout << "The two input numbers ordered smallest to biggest are " << small << " and " << big <<endl;
    return 0;
}
void getNums(int &input1, int &input2){
    cout << "Enter an integer: ";
    cin >> input1;
    cout << "Enter a second integer: ";
    cin >> input2;
}
void orderNums(int &num1, int &num2){
    int temp;
    if(num1 > num2){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
}

