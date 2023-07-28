//将二维数组传递给函数时，形参类型必须包含列数大小的声明，因为C++需要这个信息来将下标书组引用转换为存储该元素的内存地址
#include<iostream>
#include<iomanip>
using namespace std;
const int NUM_COLS = 4;
const int TBL1_ROWS = 3;
const int TBL2_ROWS = 4;
void showArray (const int [][NUM_COLS], int);   //将列数当作形参传入
int main(){
    int table1[TBL1_ROWS][NUM_COLS] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int table2[TBL2_ROWS][NUM_COLS] = {{10, 20, 30, 40}, {50, 60, 70, 80}, {90, 100, 110, 120}, {130, 140, 150, 160}};
    cout << "The contents of table1 are: \n";
    showArray(table1, TBL1_ROWS);   //传入列数对应的二维数组以及行数
    cout << "The contents of table2 are: \n";
    showArray(table2, TBL2_ROWS);
    return 0;
}
void showArray (const int array[][NUM_COLS], int numRows){
    for (int row = 0; row < numRows; row++){
        for (int col = 0; col < NUM_COLS; col++){
            cout << setw(5) << array[row][col] << " ";
        }
        cout << endl;
    }
}