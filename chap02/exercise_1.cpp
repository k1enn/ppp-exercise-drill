/*
Write a program in C++ that converts from miles to kilometers. Your program
should have a reasonable prompt for the user to enter a number of miles.
Hint: A mile is 1.609 kilometers.
*/
#include "PPPheaders.h"

const double MILE_TO_KILOMETER = 1.609;

double convert_to_kilometer(double mile) {
    return mile * MILE_TO_KILOMETER;
}

int main()
{
    double mile = -1;
    double km = -1;

    cout << "Please input mile: ";
    cin >> mile;

    if(mile >= 0 && km <= 0) {
        km = convert_to_kilometer(mile);
    }

    cout << "\nFrom " << mile << " mile to " << km << " kilometers";
}
