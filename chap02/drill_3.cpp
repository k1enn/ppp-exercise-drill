#include <iostream>
/*
Write a program that produces a simple form letter based on user input.
Begin by typing the code from §2.1 prompting a user to enter his or her first\
name and writing “Hello, first_name” where first_name is the name entered by the user.
Then modify your code as follows: change the prompt to “Enter the name of the person you want to write to”
and change the output to “Dear first_name,”. Don’t forget the comma.
*/
int main()
{   // Init
    std::string first_name = "";
    std::string friend_name = "";

    // Program start here
    std::cout << "Enter the name of the person you want to write to: \n";
    std::cin >> first_name;
    std::cout << "\tDear " << first_name << ",\n";
    std::cout << "How are you? I am fine. I miss you \nLike HieuNghi miss his ex\n" ;
    std::cout << "Enter the your friend name: \n";
    std::cin >> friend_name;
    std::cout << "Have you seen " << friend_name << " lately?";
}
