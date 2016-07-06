/* 
 * File:   main.cpp
 * Author: Eric Contreras
 * Created on June 22, 2016, 6:51 PM
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
     float msMass=35;//35 Grams weight mouse
    float msKill=5; //5 Grams # kill mouse
    float hmMass=45400;//Grams or about 100 lb person
    float msSoda=350;//350 grams sugar in can
    float consin=1e-3;//1/10th of 1% concentration in soda of sweetener
    int nCans;//Number of cans
    //Input Data
    
    //Process the Data
    nCans=hmMass*msKill/(msMass*msSoda*consin);
    //Output the processed Data
    cout<<"The number of cans that a dieter with mass = ";
    cout<<hmMass<<"(grams) may consume is = "<<nCans<<"(cans)";
    cout<<endl;
    //Exit Stage Right!
    return 0;
}
