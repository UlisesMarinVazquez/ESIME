#include <iostream>

using namespace std;

int main() 

{
    char s[9][9] = { {"  ***** "},
                     {" **     "},
                     {"  ***   "},
                     {"     ** "},
                     {" *****  "} };
                     
    char y[9][9] = { {"        "},
                     {"*     * "},
                     {" *   *  "},
                     {"   *    "},
                     {"   *    "} };
                     
    char u[9][9] = { {"*     * "},
                     {"*     * "},
                     {"*     * "},
                     {"*     * "},
                     {" *****  "} };
                     
    for (int i = 0; i < 9; i++) 
    {
        cout << s[i]  << "  " << y[i] <<"  " << u[i] << endl;
    }
    
    return 0;
}

