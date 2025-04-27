#include <bits/stdc++.h>
using namespace std;


class employe{

   private :
    
     int Age; 
      string Gender ;
        
       string Name; 
        


       public: 
    void print(){
     
 cout<<"My name is- "<<getname()<<endl<<"age is- "<<getage()<<endl<<"gender - "<<getgender()<< endl;
  

    }    


       void setname( string name){

       Name  = name ; 
         

       }

       string getname( ){

        return Name;
         
       }

       void setgender( string gender){

        Gender  = gender ; 
          
 
        }
 
        string getgender( ){
 
         return Gender;
          
        }


        void setage(int age){
     
               if(age >=18){

                Age = age ;
               }
               else{
   
   Age = 18 ;
     
               }
              
        }

        int getage(){

            return Age;
             
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
      

       employe emp2 = employe("jhon " , " male" , 10);
         
      emp2. print();
        


}
