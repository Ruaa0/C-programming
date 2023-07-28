//程序报错咱也不懂
#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;

bool readData(ifstream &someFile, string &city, double &rain);
int main(){
    ifstream inputFile;
    string city;
    double inchesOfRain;
    cout << "July Rainfall Totals for Selected Cities \n\n";
    cout << "City       Inches \n";
    inputFile.open("rainfall.dat");
    if(inputFile.fail())
        cout << "Error opening file.";
    else{
        while(readData(inputFile, city, inchesOfRain) == true){
            cout << setw(11) << left << city;
            cout <<fixed << showpoint << setprecision(2) << inchesOfRain << endl;
        }
        inputFile.close();
    }
    return 0;
}
bool readData(ifstream &someFile, string &city, double &rain){
    bool foundData = someFile >> city >> rain;
    return foundData;
}