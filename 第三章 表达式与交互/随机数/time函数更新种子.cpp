//使用 time 函数更新种子
#include<iostream>
#include<cstdlib>
#include<ctime>
 using namespace std;
 int main(){
    unsigned seed;
    seed = time(0);//调用time函数，0为参数
    srand(seed);
    cout << rand() <<endl;
    cout << rand() <<endl;
    return 0;
 }