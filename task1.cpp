#include<iostream>
using namespace std;
class Guessgame
{
int targetNumber;
public:
Guessgame(){
    srand(static_cast<unsigned int>(time(0)));
    targetNumber=rand()%100+1;
}
inline bool iscorrectguess(int guess){
    return guess=targetNumber;
}
void playgame(){
    int guess;
    int attempt=0;
    cout<<"Welcome to the guess the number game!"<<endl;
    cout<<"i'm thinking of a number between 1 to 100."<<endl;
    do{
        cout<<"Enter your guess:";
        cin>>guess;
        attempt++;
        if(iscorrectguess(guess)){
            cout<<"Congratulations! You guessed the correct number in"<<attempt<<"attempt"<<endl;
            return;
        }else if(guess<targetNumber){
            cout<<"Too low! Try again."<<endl;
        }
        else{
            cout<<"Too high! Try again."<<endl;
        }
    }while(true);
}
};
int main(){
    Guessgame game;
    game.playgame();
    return 0;
}