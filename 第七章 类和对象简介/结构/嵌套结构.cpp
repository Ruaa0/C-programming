//就像对象组合一样，一个结构的实例也可以嵌套在另一个结构中
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct CostInfo
{
    double food, medical, license, misc;
};
struct PetInfo
{
    string name;
    string type;
    int age;
    CostInfo cost;
    PetInfo(){
        name = "unknown";
        type = "unknown";
        age = 0;
        cost.food = cost.medical = cost.license = cost.misc = 0.00;
    }
};
int main(){
    PetInfo pet;
    pet.name = "Sassy";
    pet.type = "cat";
    pet.age = 5;
    pet.cost.food = 300.00;   //嵌套结构赋值
    pet.cost.medical = 200.00;
    pet.cost.license = 7.00;
    cout << fixed << showpoint << setprecision(2);
    cout << "Annual costs for my " << pet.age << "-year-old " << pet.type << " " << pet.name << " are $" << (pet.cost.food + pet.cost.medical + pet.cost.license + pet.cost.misc) << endl;
    return 0;
}

