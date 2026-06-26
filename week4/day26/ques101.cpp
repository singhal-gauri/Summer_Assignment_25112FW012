#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(0));
    int number=rand() % 100 + 1;
    
    int guess=0;
    int attempts=0;

    cout <<"===== Number Guessing Game ====="<< endl;
    cout <<"Guess a number between 1 and 100."<< endl;

    do{
        cout<<"Enter your guess: ";
        cin>>guess;
        attempts++;

        if(guess>number){
            cout<<"Too high!Guess lower"<<endl;
        }
        else if(guess<number){
            cout<<"Too low!Guess higher"<<endl;
        }
        else{
            cout <<"Congratulations! You guessed the correct number."<< endl;
            cout <<"Number of attempts: "<< attempts << endl;
        }
    }while(guess!= number);

    return 0;
    
}