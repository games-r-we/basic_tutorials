#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    int count = 0;
    std::string description = "The Object of the Game is to not take the 21st Coin!\nEach Turn You are able to take 1 or 2 Coin(s)\n";
    std::string question = "\nWould You Like To Go First? Y or N \n";
    cout << description;
    cout << question;
    int me,computer;
    std::string choice,winner;
    (istream&)getline(cin, choice);
    if(choice != "Y" && choice != "y"){
        computer = rand()%3;
        cout << "The Computer Took " << computer << " Coin(s)!\n";
        count += computer;
    }
    while(count < 21){
        cout << "Coin(s) Taken: " << count << "\nChoose 1 or 2 Coin(s)!\n";
        cin >> me;
        while(me != 1 && me != 2){
            cout << "Coin(s) Taken: " << count << "\nYou May Only Choose 1 or 2 Coin(s)!\nNow Choose Again!\n";
            cin >> me;
        }
        if(count + me >= 21){
            winner = "The Computer";
            break;
        }
        count += me;
        computer = rand()%2 + 1;
        if(count + computer >= 21){
            winner = "You";
            break;
        }
        cout << "The Computer Took "<< computer << " Coin(s)!\n";
        count += computer;
    }
    cout << "\nThe Winner Is " << winner << "!\n";
    return 0;
}
