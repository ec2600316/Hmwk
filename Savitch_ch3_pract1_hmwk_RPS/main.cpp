/* 
 * File:   main.cpp
 * Author: Eric Contreras
 * Created on June 22, 2016, 6:51 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>
#include <string>

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float player_1, player_2; //inputs
    char ans;
    
    //Input Data
    
do {
    cout<<"Welcome to the Rock, Paper, Scissors game!!!"<<endl;
    cout<<"Player one please type  1 (Rock) , 2 P (Paper) OR 3 S(Scissors) and enter"<<endl;
    cin>>player_1; // input 
   
    cout<<"Now player two please choose a number!!"<<endl;
    cin>>player_2; // input 
    //------------------------------------------------- 
    //IF ELSE STATMENTS REGARDING ALL POSSIBEL OUTCOMES
    //-------------------------------------------------
    if (player_1== 1 && player_2== 2){

    cout<<"Player 2 wins because paper wraps rock"<<endl;
    }
    

    else if (player_1 == 2 && player_2 == 3){

    cout<<"Player 2 wins Scissors cuts paper"<<endl;
    }

    else if (player_1 == 3 && player_2 == 3){

        cout<<"No one wins, tie game"<<endl;
    }
    
    else if (player_1 == 1 && player_2 == 1){
    
        cout<<"No one wins, tie game!"<<endl;
    }
    
    else if (player_1 == 2 && player_2 == 2){
    
        cout<<"No one wins, tie game!"<<endl;
    }
    else if (player_1 == 1 && player_2 == 3){
    
        cout<<"Player 1 wins, rocks smashes scissors"<<endl;
    }
    else if (player_1 == 2 && player_2 == 1){
    
        cout<<"Player one wins the game, paper wraps rock."<<endl;
    }
    else if (player_1 == 3 && player_2 == 2){
    
        cout<<"Player one wins, scissors cuts paper"<<endl;
    }
    else{
        cout<<"wrong input thoo"<<endl;
    }
    
    { cout<<"Would you like to play again?"<<endl;
    cin>>ans;
     }
} while (ans == 'y' || ans == 'Y');


    cout<<"Adios tho!"<<endl;
            
    //Process the Data
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}
