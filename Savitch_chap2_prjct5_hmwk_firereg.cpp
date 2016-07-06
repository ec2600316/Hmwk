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
    float Room_Capacity=100, Number_of_people, Kick_out;
    char ans;
    //Input Data
    do{
        
        cout<<"I see you would like to have a party"<<endl;
        cout<<"It is fine, the only thing is that you need to"<<endl;
        cout<<" obey the fire safety laws."<<endl;
        cout<<"How many people do you plan on having in the party?"<<endl;
        cin>>Number_of_people;

        //Process the Data


        if (Number_of_people > Room_Capacity){ 
            cout<<"You have exceeded the room capacity"<<endl;
            cout<<"You cannot host the party"<<endl;
            Kick_out=Number_of_people-Room_Capacity;
            cout<<"Unless you kick out " <<Kick_out<< " people you cannot have the party"<<endl;
            cout<<"sorry for the inconvenience"<<endl;
        }else{
            cout<<"You have met the requirements....PARTY ON!!!"<<endl;
            cout<<"Would you like to try again Y or N ?"<<endl;
            cin>>ans;

        }
    
    }while(ans == 'y' || ans== 'Y');
    
    
    cout<<"Adios"<<endl;
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}