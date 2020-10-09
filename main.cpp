#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

int iRandomNumber = -1;
int iGuess1;
int iGuess2;
int iGuess3;

int main() {

    srand(time(NULL));

    iRandomNumber = rand() % 10 + 1;

    cout << "Enter a number between 1-10 (You only get 3 chances - So make them count!" << endl;

    cin >> iGuess1;

    if (iGuess1 == iRandomNumber)
    {
        cout << "Well done! You guessed it!" << endl;
    }

    else
    {
        cout << "Sorry wrong answer, second chance:" << endl;
    }

    cout << iRandomNumber << endl;

    cin >> iGuess2;

    if (iGuess2 == iRandomNumber)
    {
        cout << "Well done! You guessed it!" << endl;
    }

    else if (iGuess2 == iGuess1)
    {
        cout << "Don't be a muppet all your life - Guess a different number!" << endl;
    }

    else
    {
        cout << "Sorry wrong answer, Last chance:" << endl;
    }

    cout << iRandomNumber << endl;

    cin >> iGuess3;

    if (iGuess3 == iRandomNumber)
    {
        cout << "Well done! You guessed it!" << endl;
    }

    else if (iGuess3 != iRandomNumber)
    {
        cout << "GAME OVER" << endl;
    }


    cout << iRandomNumber << endl;


    return 0;
}