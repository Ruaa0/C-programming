//一般格式：
/*
for (dataType rangeVariable : array)
    statement;
*/
#include<iostream>
using namespace std;
int main(){
    int numbers[] = {3, 6, 9};
    for (int val : numbers){
        cout << numbers << endl;//地址
        cout << "The value is ";
        cout << val << endl;
    }
}

