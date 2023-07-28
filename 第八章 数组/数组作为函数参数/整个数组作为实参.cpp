//函数声明
#include<iostream>
using namespace std;
void showValues (int intArray[], int size); //整个数组作为形参
int main(){
    const int ARRAY_SIZE = 8;
    int collection[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};
    cout << "The array contains these values: \n";
    showValues(collection, ARRAY_SIZE);
    return 0;
}
void showValues (int nums[], int size){//这里传递的是数组的地址，也即引用，因此可以改变原数组
//  这里不能用 基于范围的for循环
/*
    for (int val : nums){
        cout << "The value is ";
        cout << val << endl;
}*/
    cout << nums << endl;
    for(int index = 0; index < size; index++)
        cout << nums[index] << " ";
    cout << endl;
}