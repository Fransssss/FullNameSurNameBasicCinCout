//Title ; Basic input and cutput I/O
// Purosese; practice output message to console and take input from user
// Enjoy the Process :)
// Author ; Fransiskus Agapa

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;

int main(int argc, char* argv[])
{
    string myFullName;                                                    // String default is empty string ""
    cout << "Please input your full name (you can put spaces) : " ;       //  Cout prints message to the console
    getline(cin, myFullName);                                      // Cin takes user input - Getline enable cin to take input including space
    cout << endl;                                                         // create new line
    if( myFullName.empty())
    {
        cout << " No name entered "<< endl;
    } else
    {
        cout << "Hello [ " << myFullName << " ] Welcome to the 'World of Creativity'!" << endl;     // this does the magic! : )
        string surName;
        cout << "What would you like us to call you ? " << endl;
        cin >> surName;
        cout << "Hello [ " << surName << " ] Great to have you here! " << endl;
    }
    return 0;
}
