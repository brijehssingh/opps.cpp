#include <bits/stdc++.h>
using namespace std;

class Employe {
private:
    int Age;
    string Gender;
    string Name;

public:
    // Constructor
    Employe(string name, string gender, int age) {
        setName(name);
        setGender(gender);
        setAge(age);
    }

    // Setters
    void setName(string name) {
        Name = name;
    }

    void setGender(string gender) {
        Gender = gender;
    }

    void setAge(int age) {
        if (age >= 18) {
            Age = age;
        } else {
            Age = 18; // Set minimum age to 18
        }
    }

    // Getters
    string getName() {
        return Name;
    }

    string getGender() {
        return Gender;
    }

    int getAge() {
        return Age;
    }

    // Print function
    void print() {
        cout << "My name is: " << getName() << endl
             << "Age is: " << getAge() << endl
             << "Gender: " << getGender() << endl;
    }
};

int main() {
    Employe emp("Brijesh", "Male", 22);
    emp.print();

    cout << "------------------------" << endl;

    Employe emp2("John", "Male", 10);
    emp2.print();

    return 0;
}
