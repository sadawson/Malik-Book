#include <iostream>
using namespace std;

int main () {
    float input;
    cin >> input;
    if (input > 0) 
        cout << "Positive";
    else if (input < 0)
        cout << "Negative";
    else 
        cout << "Zero";
    cout << endl;

    return 0;
}//end main
