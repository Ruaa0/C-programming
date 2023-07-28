//比线性搜索更有效，但要求数组中的值有序
#include<iostream>
using namespace std;
int binarySearch(const int [], int, int);
const int SIZE = 20;
int main(){
    int IDnums[SIZE] = {101, 142, 147, 189, 199, 207, 222, 
                        234, 289, 296, 310, 319, 388, 394,
                        417, 429, 447, 521, 536, 600 };
    int empID, results;
    cout << "Enter the employee ID you wish to search for: ";
    cin >> empID;
    results = binarySearch(IDnums, SIZE, empID);
    if(results == -1)
        cout << "That number dose not exist in the array. \n";
    else{
        cout << "ID: " << empID << " was found in element " << results << " of the array. \n";
    }
    return 0;
}
int binarySearch (const int array[], int size, int value){
    int first = 0,  //数组第一个元素
        last = size - 1,    //数组最后一个元素
        middle,     //数组中点
        position = -1;  //搜索的数字的位置
    bool found = false; //查找标志
    while (!found && first <= last){
        middle = (first + last) / 2;
        if (array[middle] == value){
            found = true;
            position = middle;
        }
        else if (array[middle] > value)
            last = middle - 1;
        else   
            first = middle + 1;
    }
    return position + 1;
}
