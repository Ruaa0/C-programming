//某个类的实例有可能是另一个类的成员变量
#include<iostream>
using namespace std;
class Rectangle{
    private:
        double length;
        double width;
    public:
        void setLength (double len){
            length = len;
        }
        void setWidth (double wid){
            width = wid;
        }
        double getLength (){
            return length;
        }
        double getWidth (){
            return width;
        }
        double getArea (){
            return length * width;
        }
};
class Carpet{
    private:
        double pricePerSqyd;
        Rectangle size;     // rectangle对象 作为 carpet对象 成员
    public:
        void setPricePerYd (double p){
            pricePerSqyd = p;
        }
        void setDimensions (double len, double wid){
            size.setLength (len / 3);
            size.setWidth (wid / 3);
        }
        double getTotalPrice(){
            return (size.getArea() * pricePerSqyd);
        }
};
int main(){
    Carpet purchase;
    double pricePerYd;
    double length;
    double width;
    cout << "Room len+gth in feet: ";
    cin >> length;
    cout << "Room width in feet: ";
    cin >> width;
    cout << "Carpet price per sq. yard: ";
    cin >> pricePerYd;
    purchase.setDimensions (length, width);
    purchase.setPricePerYd(pricePerYd);
    cout << "\nThe total price of my new " << length << " x " << width << " carpet is $" << purchase.getTotalPrice() <<endl;
    return 0;
}