//需包含 cstdlib 头文件
//random = rand()
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    //不给种子，则随机数（伪随机数）相同（运行多少次都是一样的）
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;

    //添加种子
    unsigned seed; //种子是非负整数
    cout << " Enter a seed value: ";
    cin >> seed;
    srand(seed);
    //设置种子后随即数每次运行便不一样
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    return 0;
}