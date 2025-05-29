#include <bits/stdc++.h>
using namespace std;

class Employee {
public:
    string name;
    int age;

    Employee(string Name, int Age ) {
        name = Name;
        age = Age;
    }

    void print() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    vector<Employee> employees;

    // Add employee objects dynamically
    employees.push_back(Employee("Alice", 30));
    employees.push_back(Employee("Bob", 25));
    employees.push_back(Employee("Charlie", 28));

    // Access and print each
    for (int i = 0; i < employees.size(); i++) {
        employees[i].print();
    }
    
    
    sort(employees.begin(),employees.end() , [](const Employee&a ,Employee&b ){
        
        // return a.age <b.age; 
        return a.name< a.name;
         
        
    });
    
    
    for( auto i : employees){
        
        i.print();
         
        
    }
    
    
    
    

    return 0;
}
