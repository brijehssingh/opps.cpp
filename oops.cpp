#include <bits/stdc++.h>
using namespace std;

class promotion {
public:
    // Pure virtual function
    virtual void promotionEligible() = 0; 
};

class employee :  promotion {
private:
    int Age; 
    string Gender;
    string Name; 

public: 
    // Constructor
    employee(string name, string gender, int age) {
        Name = name;
        Gender = gender;
        Age =age;
         
    }

    // Setter and Getter for Name
    void setname(string name) {
        Name = name;
    }

    string getname() {
        return Name;
    }

    // Setter and Getter for Gender
    void setgender(string gender) {
        Gender = gender;
    }

    string getgender() {
        return Gender;
    }

    // Setter and Getter for Age
    void setage(int age) {
        if (age >= 18) {
            Age = age;
        } else {
            Age = 18; // default to 18
        }
    }

    int getage() {
        return Age;
    }

    // Print function
    void print() {
        cout << "My name is: " << getname() 
             << ", Age: " << getage() 
             << ", Gender: " << getgender() << endl;
    }

    // Overriding the pure virtual function
    void promotionEligible() override {
        if (Age > 30) {
            cout << Name << " is eligible for promotion!" << endl;
        } else {
            cout << Name << " is NOT eligible for promotion yet." << endl;
        }
    }
};

int main() {
    employee emp1("Brijesh", "Male", 44);
    emp1.print();
    emp1.promotionEligible();

    employee emp2("John", "Male", 56);
    emp2.print();
    emp2.promotionEligible();

    return 0;
}
