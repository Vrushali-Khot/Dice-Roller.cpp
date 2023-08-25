///Task 4: Dice Roller
// Create a program that simulates rolling a pair
// of dice and displays the result.

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
    int dice1;
    int dice2;
    
    srand(time(0));

    cout<<"\nRolling the dice-------------\n"<<endl;
    dice1 = rand() % 6 + 1;
    cout<<"first dice result:"<<dice1<<endl;

    dice2 = rand() % 6 + 1;
    cout<<"second dice result:"<<dice2<<endl;

    cout<<"Total:"<<dice1 + dice2<<endl;
    cout<<endl;
    return 0;
}
