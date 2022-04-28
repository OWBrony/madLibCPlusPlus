#include <iostream>
#include <string>

using namespace std;

int main() {
    ask_Which();
    return 0;
}

void ask_Which() {
    /*This is to get input from the user and to
    direct them to a Mad Lib*/
    int selector = 0;
    // This is to make sure that the user gets into a Mad Lib.
    while (selector != 1 || selector != 2 || selector != 3) {
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
        else {
            cout << "\nThat is not a valid number.\n";
        }
    }
}
void run_First_Madlib() {
    // get the words from the user
    string verb1 = "";
    string verb2 = "";
    string adjective1 = "";
    string adjective2 = "";
    string noun1 = "";
    string noun2 = "";
    cout << "verb: ";
    cin >> verb1;
    cout << "\nanother verb: ";
    cin >> verb2;
    cout << "\nadjective: ";
    cin >> adjective1;
    cout << "\nanother adjective: ";
    cin >> adjective2;
    cout << "\nnoun: ";
    cin >> noun1;
    cout << "\nanother noun: ";
    cin >> noun2;
    // stick the words into an array
    string words[6] = {verb1,verb2,adjective1,adjective2,noun1,noun2};
    cout << "\n There once was a " << words[4] << "who liked to " << words[0] << ".\n";

}

void run_Second_Mablib() {
    // get the words from the user
    string verb1 = "";
    string verb2 = "";
    string adjective1 = "";
    string adjective2 = "";
    string noun1 = "";
    string noun2 = "";
    cout << "verb: ";
    cin >> verb1;
    cout << "\nanother verb: ";
    cin >> verb2;
    cout << "\nadjective: ";
    cin >> adjective1;
    cout << "\nanother adjective: ";
    cin >> adjective2;
    cout << "\nnoun: ";
    cin >> noun1;
    cout << "\nanother noun: ";
    cin >> noun2;
    // stick the words into an array
    string words[6] = {verb1,verb2,adjective1,adjective2,noun1,noun2};
}

void run_Third_Madlib() {
    // get the words from the user
    string verb1 = "";
    string verb2 = "";
    string adjective1 = "";
    string adjective2 = "";
    string noun1 = "";
    string noun2 = "";
    cout << "verb: ";
    cin >> verb1;
    cout << "\nanother verb: ";
    cin >> verb2;
    cout << "\nadjective: ";
    cin >> adjective1;
    cout << "\nanother adjective: ";
    cin >> adjective2;
    cout << "\nnoun: ";
    cin >> noun1;
    cout << "\nanother noun: ";
    cin >> noun2;
    // stick the words into an array
    string words[6] = {verb1,verb2,adjective1,adjective2,noun1,noun2};
}