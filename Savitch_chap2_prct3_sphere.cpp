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
    float radius, vm; // variable   (vm is volume)
    //Input Data
    cout<<"Enter radius of a sphere."<<endl;
    cin>>radius;
    
    //Process the Data
    vm= (4.0/3.0)*3.1415*radius*radius*radius; // Formula
    //Output the processed Data
    cout<<"The voloume is " <<vm<<endl;
            
    //Exit Stage Right!
    return 0;
}