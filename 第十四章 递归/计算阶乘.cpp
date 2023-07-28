//递归要用到 栈 思维
#include <iostream>
using namespace std;
int factorial (int);
int main(){
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "The factorial of " << number << " is: " << factorial(number) << endl;
    return 0;
}
int factorial (int num){
    if (num == 0){
        return 1;
    }
    else{
        return num * factorial(num - 1);
    }
}