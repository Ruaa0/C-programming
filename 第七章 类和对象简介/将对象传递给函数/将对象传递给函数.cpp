//传递的一样是副本，除非用引用
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class InventoryItem {
    private:
        int partNum;
        string description;
        int onHand;
        double price;
    public:
        void storeInfo (int p, string d, int oH, double cost);
        int getPartNum (){
            return partNum;
        }            
        string getDescription (){
            return description;
        }
        int getOnHand (){
            return onHand;
        }
        double getPrice (){
            return price;
        }
};
void InventoryItem::storeInfo (int p, string d, int oH, double cost){
    partNum = p;
    description = d;
    onHand = oH;
    price = cost;
}
void storeValues (InventoryItem &);  //接收引用对象，以改变对象内部
void showValues (InventoryItem);
int main(){
    InventoryItem part;
    storeValues (part);
    showValues (part);
    return 0;
}
void storeValues(InventoryItem &item){
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
    item.storeInfo (partNum, description, qty, price);
}
void showValues(InventoryItem item){
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "Part Number: " << item.getPartNum() << endl;
    cout << "Description: " << item. getDescription() <<endl;
    cout << "Units On Hand: " << item.getOnHand() << endl;
    cout << "Price: $" << item.getPrice() <<endl;
}

