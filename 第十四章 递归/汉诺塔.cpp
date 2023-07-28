//化繁为简，我为递归代言
#include <iostream>
#include <string>
using namespace std;
void moveDisks (int, string, string, string);
int main(){
    int num;
    cout << "Input the floors of hannuota: ";
    cin >> num;
    moveDisks(num, "a", "b", "c");
    return 0;
}
void moveDisks (int num, string a, string b, string c){
    if(num == 1){
        cout << a << " move to " << c << endl;
    }
    else{
        moveDisks(num - 1, a, c, b);
        cout << a << " move to " << c << endl;
        moveDisks(num - 1, b, a, c);
    }
}