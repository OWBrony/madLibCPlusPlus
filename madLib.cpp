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

}

void run_Second_Mablib() {

}

void run_Third_Madlib() {

}