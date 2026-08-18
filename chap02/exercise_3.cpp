/*
[4] Write a program that prompts the user to enter two integer values. Store
these values in int variables named val1 and val2. Write your program to
determine the smaller, larger, sum, difference, product, and ratio of these
values and report them to the user.
*/
#include "PPPheaders.h"

int smaller(int val1, int val2) {
    if (val1 < val2)
        return val1;

    if (val2 < val1)
        return val2;

    return -1;

}

int larger(int val1, int val2) {
    if (val1 > val2)
        return val1;
    if (val2 > val1)
        return val2;
    return -1;
}

int sum(int val1, int val2) {
    return val1 + val2;
}

int difference(int val1, int val2) {
    return val1 == val2;
}

int product(int val1, int val2) {
    return val1 * val2;
}

int ratio(int val1, int val2) {
    return val1 / val2;
}

string legit_input(int x) {
    if (x <= 0)
        return "Input not legit, try again";
    return "";
}

int input(int val) {
    while(true) {
    cin >> val;
    string error_msg = legit_input(val);
    if (error_msg.empty())
        break;
    cout << error_msg << "\n";
    }

    return val;
}
int main()
{
    int val1 = -1;
    int val2 = -1;

    cout << "Please input val1: ";
    val1 = input(val1);
    cout << "Please input val2: ";
    val2 = input(val2);

    cout << "Smaller:" << smaller(val1, val2) <<"\n";
    cout << "Larger:" << larger(val1, val2) <<"\n";
    cout << "Sum:" << sum(val1, val2) <<"\n";
    cout << "Product:" << product(val1, val2) <<"\n";
    cout << "Diff:" << difference(val1, val2) <<"\n";
    cout << "Ratio:" << ratio(val1, val2) <<"\n";
}
