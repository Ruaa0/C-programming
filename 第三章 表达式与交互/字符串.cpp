//字符串加法
//spaces.assign(n,s) 函数 ---- 生成n个s字符
//.length() 统计长度
#include<iostream>
#include<string>
using namespace std;
int main(){
    string firstName, lastName, fullName;
    string stars;
    int numStars;
    cout << " Please enter your first name: ";
    getline(cin, firstName);
    cout << " Please enter your last name: ";
    getline(cin, lastName);
    fullName = firstName + " " + lastName;
    numStars = fullName.length();
    stars.assign(numStars, '*');
    cout << endl;
    cout << stars << endl;
    cout << fullName << endl;
    cout << stars << endl;
    return 0;
} 