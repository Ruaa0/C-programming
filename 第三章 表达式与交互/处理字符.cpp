//cin getline cin.get cin.ignore 
#include<iostream>
#include<string>
using namespace std;
int main(){
    //getline
    string name;
    string city;
    cout << " Please enter name: "; 
    getline(cin, name);//若用cin遇到空格就寄了。
    cout << " Please enter city: ";
    getline(cin, city);
    cout << " Hello, " << name << endl;
    cout << " You live in " << city << endl;
    return 0;
}