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

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float Excercise_amount; // amount of assignments
    float Score_1, Score_2, Score_3; // assignment scores
    float Total_score1=10, Total_score2=12, Total_score3=8; // out of scores
    float Score_total; // score totals or 123 scores
    float total_score_total; // total of amoount couldve gotten 
    char ans;
    //Input Data
    
    do //LOOP
    {
    cout<<"Hello student how many assignemnts did you have? (1-3)"<<endl;
    cin>>Excercise_amount;
    
    if (Excercise_amount > 3)
    {   cout<<"Program cannot run your request, pick another number....maybe 1-3..hint hint"<<endl;
    return 0;
    }
    
   
    cout<<"what was the score received for your first score?(0-10)"<<endl;
    cin>>Score_1;
    
    cout<<"What was the score you received on your second score?(0-12)"<<endl;
    cin>>Score_2;
    
    cout<<"what was the score you got on your third score?(0-8)"<<endl;
    cin>>Score_3;
   
    //Process the Data
     Score_total=Score_1+Score_2+Score_3;
    total_score_total=Score_total/30;
    //Output the processed Data
    cout<<" your score is "<<Score_total<< " and you percentage is " <<total_score_total<<"%"<<endl;
    cout<<"Would you like to run this program again, Y OR N"<<endl;
    cin>>ans;
    }while (ans == 'y'|| ans =='Y');
    cout<<"Adios tho!"<<endl;
    //Exit Stage Right!
    return 0;
}
