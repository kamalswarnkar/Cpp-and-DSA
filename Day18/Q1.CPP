#include <iostream>
#include <tuple>
#include <string>

using namespace std;

class Person {
private:
    string firstName, lastName;
    int age;

public:
    Person(string fName, string lName, int a) : firstName(fName), lastName(lName), age(a) {}

    string getFullName() {
        return firstName + " " + lastName;
    }

    tuple<string, string, int> getDetails() {
        return make_tuple(firstName, lastName, age);
    }
};

int main() {
    string fname, lname;
    int Age;
    
    cout << "First Name: ";
    getline(cin, fname);
    cout << "Last name";
    getline(cin, lname);
    cout << "Age: ";
    cin >> Age;
    
    Person person(fname, lname, Age);

    auto [first, last, age] = person.getDetails();

    cout << "Full Name: " << person.getFullName() << endl;
    cout << "First Name: " << first << ", Last Name: " << last << ", Age: " << age << endl;

    return 0;
}
