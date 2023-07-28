//将文件流对象传递给函数时，应始终使用引用形参
#include<iostream>
#include<fstream>
using namespace std;
void readFile(ifstream &);
int main(){
    ifstream dataIn;
    dataIn.open("weather.dat");
    if(dataIn.fail()){
        cout << "Error opening file.";
    }
    else{
        readFile(dataIn);
        dataIn.close();
    }
    return 0;
}
void readFile(ifstream &someFile){
    int temperature;
    while(someFile >> temperature){
        cout << temperature << " ";
    }
}