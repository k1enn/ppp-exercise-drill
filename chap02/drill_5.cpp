#include "PPPheaders.h"

int main()
{
    // Init
    string first_name = "";
    string friend_name = "";
    int age = -1;

    // Program start here
    cout << "Enter the name of the person you want to write to: \n";
    cin >> first_name;
    cout << "\tDear " << first_name << ",\n";
    cout << "How are you? I am fine. I miss you \nLike HieuNghi miss his ex\n" ;

    cout << "Enter your friend's name: \n";
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?\n";

    cout << "Enter your age: \n";
    cin >> age;

    // Check outlier
    if ( 110 <= age || age <= 0) {
        simple_error("you're kidding!");
    }

    if (age <= 12) {
        cout << "Next year you will be" << ++age;
    }

    if (age == 17) {
        cout << "Next year you will be able to vote";
    }

    if (age >= 70) {
        cout << "Are you retired?";
    }


}
