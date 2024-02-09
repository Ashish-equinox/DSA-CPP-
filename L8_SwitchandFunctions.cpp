#include <iostream>
using namespace std;

// Switch case statments are used to execute a specific case w.r.t the argument given in switch
// Note:only int and char can be given as argument for switch()
// break; after each case is used only if we want to execute contents of that case alone.
// If no case is executed then default case is run.
// Nested switch is a switch within a case of external switch.
// "continue" statment can't be used within switch case as its only used within loops to skip current iteration and switch is "control flow statment."

int main()
{
    // int num=1;
    // char num = 'x';
    char num = 'n';
    char num1 = 'z';

    switch (num)
    {
    case 1:
        cout << "hello\n";
        break;

    case 'x':
        cout << "Namaste\n";
        break;

    case 'n':
        switch (num1)
        {
        case 'z':
            cout << "nested switch exec.";
            break;
        }
        break;

    default:
        cout << "default case has been executed";
        break;
    }
}