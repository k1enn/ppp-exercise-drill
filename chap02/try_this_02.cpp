// Get this little program to run.
// Then, modify it to read an int rather than a double.
// Also, “exercise” some other operations, such as the modulo operator, %.
// Note that for ints / is integer division and % is remainder (modulo),
// so that 5/2 is 2 (and not 2.5 or 3) and 5%2 is 1.
// The definitions of integer *, /, and % guarantee that for two positive ints a and b we have a/b * b + a%b == a.
#include "PPPheaders.h"

int main()          // simple program to exercise operators
{
         cout << "Please enter a integer value: ";
         int n = 0;
         cin >> n;
         cout << "n == " << n
                  << "\nn+1 == " << n+1
                  << "\nthree times n == " << 3*n
                  << "\ntwice n == " << n+n
                  << "\nn squared == " << n*n
                  << "\nhalf of n == " << n/2
                  << "\nchia lay du cho 4 == " << n%4
                  << "\nsquare root of n == " << sqrt(n)
                  << '\n';
}
