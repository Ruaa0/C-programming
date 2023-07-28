//构造函数也可以重载
//当构造函数形参不同时即为 重载构造函数
#include<iostream>
#include<iomanip>
using namespace std;
class Sale{
    private:
        double taxRate;
    public:
        Sale(double rate){
            taxRate = rate;
        }
        Sale(){ //重载
            taxRate = 0.0;
        }
        double calcSaleTotal(double cost){
            double total = cost + cost*taxRate;
            return total;
        }
};
int main(){
    Sale cashier1(.06); //定义一个 taxRate=0.06 的对象
    Sale cashier2;    //定义一个 taxRate=0.0 的对象; 注意，形参为空，后面不用加括号
    cout << fixed << showpoint << setprecision(2);
    cout << "With a 0.06 sales tax rate, the total \n";
    cout << "of the $24.95 sale is $";
    cout << cashier1.calcSaleTotal(24.95) <<endl;
    cout << "On a tax-exempt purchase, the total \n";
    cout << "of the $24.95 sale is $";
    cout << cashier2.calcSaleTotal(24.95) << endl;
    return 0;
}