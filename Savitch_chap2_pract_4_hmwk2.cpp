/* 
 * File:   main.cpp
 * Author: Eric Contreras
 * Created on June 27, 2016, 6:20 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string User_name;
    string First_name;
    string Last_name;
    string Food;
    int Number;
                                //Variables to be placed in text
    string Adjective;
    string Color;
    string Animal;
    //Input Data
    { cout<<"Hello, User...Lets play a game !"<<endl;
    cout<<"Please type the first name of your instructor."<<endl;
    cin>>First_name; // fill in variable 
     }
    { cout<<"Now what is the last name"<<endl;
    cin>>Last_name; //last name variable
     }
    
    { cout<<"Now give me your name"<<endl;
    cin>>User_name; //first name user variable 
     }
    
     {cout<<"Now what is your favorite food"<<endl;
    cin>>Food;
     }
     
     { cout<<"Now type a number between 100 and 120"<<endl;
    cin>>Number;
      }
     
     { cout<<"Now give me and adjective"<<endl;
    cin>>Adjective;
      } 
      
      { cout<<"Now give me your favorite color."<<endl;
    cin>>Color;
       }
    
      { cout<<"Now give me your favorite animal"<<endl;
    cin>>Animal;
       }
            
            
            
            
           
           
    //Process the Data
    
    //Output the processed Data
                            // The Story 
    cout<<"Dear Instructor " <<First_name << Last_name<< ","<<endl;
    cout<< "I am sorry that i  am unable to turn in my homework at this time."<<endl;
    cout<< "First, i ate rotten " <<Food<<endl;
    cout<< "which made me turn " <<Color<< " and extremely ill."<<endl;
    cout<< "i came down with a fever of " <<Number<< ". Next, my "<<Adjective<<endl;
    cout<< "pet " <<Animal<< " must have smelled the remains of the " <<Food<< " in my"<<endl;
    cout<< "homework, because he ate it. I am currently rewritting my homework"<<endl;
    cout<< "and hope you will accept it late."<<endl;
           
            cout<< "sincerly,"<<endl;
            cout<<User_name<<endl;
    //Exit Stage Right!
    return 0;
}