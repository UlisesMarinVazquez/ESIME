#include <iostream>
using namespace std;

int main() {
    char s[5][9] = { {"  ***** "},
                     {" **     "},
                     {"  ***   "},
                     {"     ** "},
                     {" *****  "} };
                     
    char y[5][9] = { {"        "},
                     {"*     * "},
                     {" *   *  "},
                     {"   *    "},
                     {"   *    "} };
                     
    char u[5][9] = { {"*     * "},
                     {"*     * "},
                     {"*     * "},
                     {"*     * "},
                     {" *****  "} };
                     
    for (int i = 0; i < 5; i++) {
        cout << s[i]  << "  " << y[i] <<"  " << u[i] << endl;
    }
    
    return 0;
}
