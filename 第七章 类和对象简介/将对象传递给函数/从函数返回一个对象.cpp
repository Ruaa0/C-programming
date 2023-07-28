//返回对象
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class InventoryItem{
    private:
        int partNum;
        string description;
        int onHand;
        double price;
    public:
        void storeInfo(int p, string d, int oH, double cost);
        int getPartNum () const{
            return partNum;
        }            
        string getDescription () const{
            return description;
        }
        int getOnHand () const{
            return onHand;
        }
        double getPrice () const{
            return price;
        }
};
void InventoryItem::storeInfo (int p, string d, int oH, double cost){
    partNum = p;
    description = d;
    onHand = oH;
    price = cost;
}

InventoryItem createItem(); //返回对象

void showValues (const InventoryItem &);    //常量引用形参
int main(){
    InventoryItem part = createItem();
    showValues (part);
    return 0;
}
InventoryItem createItem (){
    InventoryItem tempItem;
    int partNum;
    string description;
    int qty;
    double price;
    cout << "Enter data for the new part number \n";
    cout << "part number: ";
    cin >> partNum;
    cout << "Description: ";
    cin.get();
    getline(cin, description);
    cout << "Quantity on hand: ";
    cin >> qty;
    cout << "Unit price: ";
    cin >> price;
    tempItem.storeInfo (partNum, description, qty, price);
    return tempItem;
}
void showValues(const InventoryItem &item){
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "Part Number: " << item.getPartNum() << endl;
    cout << "Description: " << item. getDescription() <<endl;
    cout << "Units On Hand: " << item.getOnHand() << endl;
    cout << "Price: $" << item.getPrice() <<endl;
}

