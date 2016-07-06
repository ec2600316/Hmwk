/* 
 * File:   main.cpp
 * Author: Eric Contreras
 * Created on June 27, 2016, 8:30 PM
 * Purpose:  BMR 
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
    char mf;//Male/female 
    float lbs,inches,yrs;
    float BMR,chocBar=230.0f;
    int nBars;
    
    //Input Data
    cout<<"Candy bar calculation to maintain weight"<<endl;
    cout<<"Eat less than this to lose weight!"<<endl;
    cout<<"Input male or female with m or f"<<endl;
    cin>>mf;
    cout<<"Input weight(lbs), height(inches), age(yrs)"<<endl;
    cin>>lbs>>inches>>yrs;
    
    //Process the Data
    if(mf=='m'||mf=='M'){
        BMR=66+6.3*lbs+12.9*inches-6.8*yrs;
    }else{ // other than M or m then this executes. 
        BMR=655+4.3*lbs+4.7*inches-4.7*yrs;
    }
    nBars=BMR/chocBar+1;
    
    //Output the processed Data
    cout<<"Eat less than "<<nBars<<" chocolate bars to lose weight"<<endl;
    
    //Exit Stage Right!
    return 0;
}