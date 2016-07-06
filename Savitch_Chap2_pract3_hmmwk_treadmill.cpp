/* 
 * File:   main.cpp
 * Author: Eric Contreras
 * Created on June 27, 2016, 9:03 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float MPH; //miles per hour
    float MPM; //miles per minute
    int MPMW;  // Mile per minute whole number 
    float Fraction;
    int seconds;//
    char ans;
    //Input Data
    do
    {
   cout<<"Hello user i can convert your miles per hour to miles per minutes."<<endl;
   cout<<"input your miles per hour."<<endl;
   cin>>MPH;
   
    //Process the Data
   

   MPM=60/MPH; //Miles per minute conversion
   MPMW=MPM; //miles per minute whole- miles per minute double
   Fraction=MPMW-MPM; // decimal point times 60 to make seconds. 
   seconds=Fraction*60;
           
     
    //Output the processed Data
   cout<< "your pace is "<<MPMW<< " minutes and "<<seconds<< " seconds per mile."<<endl;
   cout<<"would you like to run this program again Y or N"<<endl;
   cin>>ans;
   }while (ans == 'y' || ans == 'Y');
   cout<<"adios"<<endl;
    //Exit Stage Right!
    return 0;
}