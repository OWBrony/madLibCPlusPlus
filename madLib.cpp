#include <iostream>
#include <string>

using namespace std;

void run_First_Madlib() {
    // get the words from the user

    string questions[6] = {"verb (present): ","verb (past): ","adjective: ","another adjective: ","noun: ","noun (animal): "};
    string words[6] = {};
    // stick the words into an array
    for (int i = 0; i <= 5; i++) {
        cout << "\n" << questions[i];
        cin >> words[i];
    }
    // display the story while pulling the words from the array
    cout << "\nThere once was a " << words[4] << " who liked to " << words[0] << ".\n";
    cout << "The " << words[4] << " would " << words[0] << " whenever it could.\n";
    cout << "One day it " << words[1] << " a " << words[2] << " " << words[5] << ".\n";
    cout << "The " << words[5] << " turned and " << words[1] << " the " << words[4];
    cout << "until it was " << words[3] <<".\n";
}

void run_Second_Mablib() {
    // get the words from the user
    string questions[6] = {"verb (present): ","verb (past): ","adjective: ","another adjective: ","noun: ","noun (animal): "};
    string words[6] = {};
    // stick the words into an array
    for (int i = 0; i <= 5; i++) {
        cout << "\n" << questions[i];
        cin >> words[i];
    }
}

void run_Third_Madlib() {
    // get the words from the user
    string questions[6] = {"verb (present): ","verb (past): ","adjective: ","another adjective: ","noun: ","noun (animal): "};
    string words[6] = {};
    // stick the words into an array
    for (int i = 0; i <= 5; i++) {
        cout << "\n" << questions[i];
        cin >> words[i];
    }
}

void ask_Which() {
    /*This is to get input from the user and to
    direct them to a Mad Lib*/
    int selector = 0;
    // This is to make sure that the user gets into a Mad Lib.
    while (selector != 4) {
        cout << "Which Mad Lib do you want? ";
        cin >> selector;
        if (selector == 1) {
            run_First_Madlib();
        }
        else if (selector == 2) {
            run_Second_Mablib();
        }
        else if (selector == 3) {
            run_Third_Madlib();
        }
        else if (selector == 4) {
            cout << "Goodbye! I love you.";
        }
        else {
            cout << "\nThat is not a valid number.\n";
        }
    }
}

int main() {
    ask_Which();
    return 0;
}