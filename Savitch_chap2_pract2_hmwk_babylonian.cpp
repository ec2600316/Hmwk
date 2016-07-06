/* 
 * File:   main.cpp
 * Author: Eric Contreras
 * Created on June 27, 2016, 9:03 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath> //Math Libary
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float n;
    float guess;
    float r;
    //Input Data
    cout<<"Program to calculate the square root"<<endl;
    cout<<"Input a number to see the repetitive approximation of the";
    cout<<" square root"<<endl;
    cin>>n;
    //Process the Data
    guess=n/2;
    r=n/guess;
    guess=(guess+r)/2;
            
    //Output the processed Data
            cout<<"r=    "<<r<<" guess=   "<<guess<< " sqrt("<<n<< ") = sqrt"<<n<<endl;
    
            
            
            
            
            
            //Exit Stage Right!
            
   
            
        
    return 0;
}