#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream inputFile;
    string name;
    inputFile.open("demofile.txt");
/*
    for( int count = 0; count <= 3; count++){   //不用for循环只会读取到空格
        inputFile >> name;  //读取文件
        cout << name <<endl;
    }
    */
    while(inputFile >> name){   //与上述 for 循环等效
        cout << name << endl;
    }
    inputFile.close();  //关闭文件
    return 0;
}