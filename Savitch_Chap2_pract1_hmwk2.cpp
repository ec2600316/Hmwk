/* 
 * File:   main.cpp
 * Author: Eric Contreras
 * Created on June 22, 2016, 6:51 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string> 
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
float Ton= 35273.92;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
   float Ton;
   float Ounces;
   float Boxes;
   float weight_in_ton;
   char ans;
    //Input Data
   
   do
   {
   
   cout<<"Hello there User, how many ounces does your cereal box weigh?"<<endl;
   cin>>Ounces;
  
    //Process the Data
   weight_in_ton=Ounces/35273.92;
   Boxes=35273.92/Ounces;
   
    //Output the processed Data
           cout<<"Your box of cereal weighs " <<weight_in_ton<< " tons."<<endl;
           cout<<"If you would like a ton of cereal at your weight of "<<Ounces<<endl;
           cout<<" ounces per cereal box, you would need "<<Boxes<<" Boxes of cereal"<<endl;
           cout<<"Would you like to run this program again Y or N"<<endl;
           cin>>ans;
   } while (ans == 'y' || ans == 'Y');
   cout<<"Adios"<<endl;
    //Exit Stage Right!
    return 0;
    }

