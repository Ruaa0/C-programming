//私有成员函数只能通过其同一类成员的函数调用
//本例中 isNewLargest() 函数为私有成员函数
//在其它公共函数中也可以完成 isNewLargest() 函数的内容，但是将其放在私有类里能够得到更加模块化的类
#include<iostream>
using namespace std;
 class SimpleStat{
    private:
        int largest;
        int sum;
        int count;
        bool isNewLargest(int); //私有成员函数
    public:
        SimpleStat();
        bool addNumber(int);
        double getAverage();
        int getLargest(){       //简短函数可以内联
            return largest;
        }
        int getCount(){
            return count;
        }
 };

 //构造函数
 SimpleStat::SimpleStat(){
    largest = sum = count = 0;
 }
 bool SimpleStat::addNumber(int num){
    bool goodNum = true;
    if(num >= 0){
        sum += num;
        count++;
        if(isNewLargest(num)){
            largest = num;
        }
    }
    else{
        goodNum = false;
    }
    return goodNum;
 }
bool SimpleStat::isNewLargest(int num){
    if(num > largest)
        return true;
    else
        return false;
}
double SimpleStat::getAverage(){
    if (count > 0)
        return static_cast<double>(sum) / count;
    else
        return 0;
}
int main(){
    int num;
    SimpleStat statHelper;
    cout << "Please enter the set of non-negative integer. \n";
    cout << "values you want to average. Separate them with \n";
    cout << "spaces and enter -1 after the last value. \n";
    cin >> num;
    while (num >= 0){
        statHelper.addNumber(num);
        cin >> num;
    }
    cout << "You entered " << statHelper.getCount() << " values. \n";
    cout << "The largest value was " << statHelper.getLargest() << endl;
    cout << "The average value was " << statHelper.getAverage() << endl;
    return 0;
}

