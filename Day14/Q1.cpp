#include <iostream>
#include <string>

using namespace std;

class Car{
    public:
        string brandname;
        string model;
        string engine;
        int no_of_Seats;
        
        void displayInfo(){
            cout << "Brand Name: "<< brandname << endl;
            cout << "Model: " << model << endl;
            cout << "Engine: " << engine <<endl;
            cout << "Number Of Seats: " << no_of_Seats <<endl;
        }
};

int main() {
    Car myCar;
    
    cout << "Give Your Car details: " << endl;
    
    cout << "Brandname: ";
    getline(cin, myCar.brandname);
    
    cout << "Model: ";
    getline(cin, myCar.model);
    
    cout << "Engine: ";
    getline(cin, myCar.engine);
    
    cout << "No of Car Seats: ";
    cin >> myCar.no_of_Seats;
    
    cout << endl;
    
    myCar.displayInfo();
    
    return 0;
}
