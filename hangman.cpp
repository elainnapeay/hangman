// pseudeocode from 
// https://bpb-us-w2.wpmucdn.com/u.osu.edu/dist/e/54002/files/2016/10/Hangman-Pseudocode-1cqubgw.pdf
// start 
// This program plays a game of hangman with the user.
// prompt user to enter a word and store into in char array
// iniitate another array of same length as word, but each character is an "_"
// initialiae variable "lives" = 6
// while loop runs while lives > 0
    // prompt user to enter a letter a through z
    // for loop: number of iterations  = length of word
        //for each iteration test whether character entered by player matches
        // the latter of the number of the current iteration
        // end of loop
    // if condtion 1: check whether any letters matched 
        // if true, variable "lives" is decremented by 1
    // else if : if letters do match 
        // if true replace the "_" with the said letter
    // if condtion 2: check whether new string is equal to original word
        // if true "print congrats you win" and exit loop
    // if condtion 3 : check whether lives = 0
        // if true, print "you lose" and exit loop"
// end of while loop

#include <iostream>
using namespace std;
int main() {
    cout << "This program plays a game of hangman with the user." << endl;
    cout << "Enter a word: ";
    string word;
    cin >> word;
    int length = word.length();
    char wordArray[length];
    char guessArray[length];
    for (int i = 0; i < length; i++) {
        wordArray[i] = word[i];
        guessArray[i] = '_';
    }
    int lives = 6;
    cout << "You have " << lives << " lives left." << endl;
    while (lives > 0) {
        cout << "Enter a letter a through z: ";
        char guess;
        cin >> guess;
        bool match = false;
        for (int i = 0; i < length; i++) {
            if (guess == wordArray[i]) {
                match = true;
                guessArray[i] = guess;
            }
        }
        if (match == false) {
            lives--;
            
        }
        bool win = true;
        for (int i = 0; i < length; i++) {
            if (guessArray[i] != wordArray[i]) {
                win = false;
            }
        }
        if (win == true) {
            cout << "Congrats you win!" << endl;
            break;
        }
        if (lives == 0) {
            cout << "You lose!" << endl;
            break;
        }
    }
    return 0;
} // end of main
