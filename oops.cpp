#include <bits/stdc++.h>
using namespace std;


class employe{

   public :
    
     int Age; 
      string Gender ;
        
       string Name; 
        
    void print(){
     
 cout<<"My name is- "<<Name<<endl<<"age is- "<<Age<<endl<<"gender - "<<Gender;
  

    }    

    

    employe ( string name , string gender  , int age ){
  
  Name = name; 
   Age= age ;
   Gender = gender;
          

    }



};

int main (){

employe emp = employe( "brijesh" , " male" , 22);
 
     emp.print();
      


}
