#include <iostream>
#include <string>

using namespace std;

class Student{
    private:
        string Name;
        string Class;
        int Roll_No;
    public:
        Student(string Name, string Class, int roll_no){
            this->Name = Name;
            this->Class = Class;
            this->Roll_No = roll_no;
        }
        
        void display(){
            cout << "Name: " << this->Name << endl;
            cout << "Class: " << this->Class << endl;
            cout << "Roll. No.: " << this->Roll_No << endl;
        }
};

int main() {
    Student S1("Kamal Swarnkar", "KS015", 44);
    
    S1.display();
    return 0;
}
