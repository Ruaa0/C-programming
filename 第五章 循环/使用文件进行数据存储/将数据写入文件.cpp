//会在同一父目录下生成新文件
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outputFile;    //定义 ofstream 对象
    outputFile.open("demofile.txt");    //打开输出文件
    cout << "Writing data to the file. \n";
    //输出内容
    outputFile << "Bitch\n";
    outputFile << "Bitch\n";
    outputFile << "Bitch\n";
    outputFile << "Bitch\n";
    //关闭文件
    outputFile.close();

    cout << "Done.\n";
    return 0;
}