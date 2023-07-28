//数组的单个元素和整个数组都可以作为参数传递给函数
#include<iostream>
using namespace std;
void showValue (int);//形参依然是int
int main(){
    const int ARRAY_SIZE = 8;
    int collection[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};
    for (int index = 0; index < ARRAY_SIZE; index++){
        showValue(collection[index]);
    }
    cout << endl;
    return 0;
}
void showValue (int num){
    cout << num << " ";
}