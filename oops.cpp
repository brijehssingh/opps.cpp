#include<bits/stdc++.h>
using namespace std;
  

class abs{
public:
 
    void promotion() = 0 ;
     


};
 
 
class employe : abs {

 private:
  
  string Name;
   string Gender;
     int Age;
      
      
// constructor 
public:
   employe(string  name , string gender , int age  ){


  Name =name;
    Gender = gender;
     
     Age = age; 


   }


  void setage(int age){

    Age = age; 

  }

  int getage(){

return Age; 


  }


  
  void setname(string name){

    Name = name; 

  }

  string getname(){

return Name; 


  }


  
  void setgender(string gender){

    Gender = gender; 

  }

  string getgender(){

return Gender; 


  }




void promotion(){

  if(age>20){
    cout<<getname()<<"yes you are promoted "<<endl<<
  }else{
cout<<getname() << "not promoted";

  }


}

 

void print(){

 cout<<"my name is "<<getname() << "age- "<<getage() << " gender" << getgender() <<endl;
  
  


}


};

int main (){

   
employe emp1 = employe("brijesh","male" , 33);
 
emp1.print();
 
 emp1.promotion();
  
   
  
 employe emp2 = employe("john","male" , 34);
 
 emp2.print();
  
  emp2.promotion();
   


}