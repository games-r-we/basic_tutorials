#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    std::string description = "The Object of the Game is to Be Lucky, or Read Your Opponent!\n However because this is a computer game, it will have to be luck that prevails!\n";
    cout << description;
    cout << "\nWelcome TO The World Of Rock, Paper, Scissors, Lizard, Spock\n";
    cout << "Scissors Cuts Paper\n";
    cout << "Paper Covers Rock\n";
    cout << "Rock Crushes Lizard\n";
    cout << "Lizzard Poisons Spock\n";
    cout << "Spock Smashes Scissors\n";
    cout << "Scissors Decapitates Lizard\n";
    cout << "Lizard Eats Paper\n";
    cout << "Paper Disproves Spock\n";
    cout << "Spock Vaporizes Rock\n";
    cout << "Rock Crushes Scissors\n";

    std::string [] choices = {"Rock","Paper","Scissors","Lizard","Spock"};
    std::string my_choice,computer;
    int computer_choice,games_won,games_lost,games_tied;

    std::string play = "yes";
    while(play == "yes"){
        cout << "What Do You Choose?\n";
        (istream&)getline(cin, my_choice);
        computer_choice = choices[rand()%4];
        
        if(comp){

        }


        cout << "Would You Like To Play Again?\n";
        (istream&)getline(cin, my_choice);
        std::transform(play.begin(), play.end(), play.begin(), ::tolower);
    }
    return 0;
}
