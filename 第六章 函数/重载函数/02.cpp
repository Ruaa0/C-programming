//也可以使用不同数量的形参进行重载
//int sum(int num1, int num2);
//int sum(int num1, int num2, int num3);
//int sum(int num1, int num2, int num3, int num4);
#include<iostream>
#include<iomanip>
using namespace std;
char getChoice();
double calcWeeklyPay(int, double);
double calcWeeklyPay(double);
int main(){
    char selection;
    int worked;
    double rate, yearly;
    cout << fixed << showpoint << setprecision(2);
    cout << "Do you want to calculate the weekly pay of\n";
    cout << "(H) an hourly-wage employee, or\n";
    cout << "(S) a salaried employee?\n ";
    selection = getChoice();
    switch(selection){
        //输入 H 和 h 都是这个case
        case 'H':   
        case 'h': cout << "How many hours were worked? ";
                  cin >> worked;
                  cout << "What is the hourly pay rate? ";
                  cin >> rate;
                  cout << "The gross weekly pay is $";
                  cout << calcWeeklyPay(worked, rate) << endl;
                  break;
        case 'S':
        case 's': cout << "What is the annual salary? ";
                  cin >> yearly;
                  cout << "The gross weekly pay is $";
                  cout << calcWeeklyPay(yearly) << endl;
    }
    return 0;
}
char getChoice(){
    char letter;
    cin >> letter;
    while(letter != 'H' && letter != 'h' && letter != 'S' && letter != 's'){
        cout << "Please enter H or S: ";
        cin >> letter;
    }
    return letter;
}
double calcWeeklyPay(int hours, double payRate){
    return hours * payRate;
}
double calcWeeklyPay(double annSalary){
    return annSalary / 52.0;
}