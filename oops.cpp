#include <bits/stdc++.h>
using namespace std;


class employe{

   public :
    
     int age; 
      string gender ;
        
       string name; 
        
    void print(){
     
 cout<<"My name is- "<<name<<endl<<"age is- "<<age<<endl<<"gender - "<<gender;
  

    }    



};

int main (){

employe emp ;
 
 emp.name = "brijesh";
   emp.age = 22; 
    emp.gender = "male";
     
     emp.print();
      


}
