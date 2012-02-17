#include <iostream>
using namespace std;

int main () {
    int x,y,z;
    cin >> x
        >> y
        >> z;    
  
    if (x > y && x > z) {
        x = x ^ z;
        z = x ^ z;
        x = x ^ z;
    }//end if
    else if (y > x && y > z) {
        y = y ^ z;
        z = y ^ z;
        y = y ^ z;
    }//end if
    if (x*x + y*y == z*z) {
        cout << "Right angle triagle" << endl;
    } else {
        cout << "Not a right angle triagle" << endl;
    }

    return 0;
}//end main
