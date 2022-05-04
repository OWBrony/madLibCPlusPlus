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
    cout << " until it was " << words[3] <<".\n";
}

void run_Second_Mablib() {
    // get the words from the user
    string questions[6] = {"verb (present): ","verb (action): ","adjective: ","another adjective: ","noun (animal): ","noun (animal): "};
    string words[6] = {};
    // stick the words into an array
    for (int i = 0; i <= 5; i++) {
        cout << "\n" << questions[i];
        cin >> words[i];
    }
    // Display the story
    cout << "On a " << words[2] << " day a " << words[4] << " went on a " << words[0] << ".\n";
    cout << "He often went a " << words[0] << " because he was very " << words[3] << ".\n";
    cout << "But no matter how often he went on a " << words[0] << " he never changed.\n";
    cout << "On this " << words[2] << "day he took a different path.\n";
    cout << "The " << words[4] << " came across a " << words[5] << " who was " << words[1] << ".\n";
    cout << "The " << words[5] << " invited the " << words[4] << "to join them.\n";
    cout << "The " << words[4] << " joined the " << words[5] << " in " << words[1];
    cout << " and was changed forever.\n";
}

void run_Third_Madlib() {
    // get the words from the user
    string questions[6] = {"name: ", "animal: ", "adjective: ", "increment of time: ", "another adjective: ",
        "body part: "};
    string words[6] = {};
    // stick the words into an array
    for (int i = 0; i <= 5; i++) {
        cout << "\n" << questions[i];
        cin >> words[i];
    }
    cout << words[4] << " was at the beach.\n";
    cout << "He enjoyed watching the " << words[1] << " as he laid on his chair.\n";
    cout << "He fell "<< words[2] << " for a few " << words[3] <<".\n"; 
    cout << "When he woke up he was "<< words[4] << "\n";
    cout << "all over, except for his " << words[5] << " which had a " << words[1] << "-shape on it.\n";
}

void ask_Which() {
    /*This is to get input from the user and to
    direct them to a Mad Lib*/
    int selector = 0;
    // This is to make sure that the user gets into a Mad Lib.
    while (selector != 4) {
        cout << "Which Mad Lib do you want? ";
        cout << "1. Doing things 2. Changing\n";
        cout << "3. Beach 4. quit";
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
            cout << "\nGoodbye! I love you.";
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