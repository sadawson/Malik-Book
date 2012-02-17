#include <iostream>
using namespace std;

int main () {
    int x,y,z;
    cin >> x
        >> y
        >> z;    
  
    if (x > y && x > z) {
        cout << x;
        if (y > z) {
            cout << y << z;
        }
        else {
            cout << y << z;
        }//end if
    }//end if

    if (y > x && y > z) {
        cout << y;
        if (x > z) {
            cout << x << z;
        }
        else {
            cout << z << x;
        }//end if
    }//end if

    if (z > x && z > y) {
        cout << z;
        if (y > x) {
            cout << y << x;
        }
        else {
            cout << x << y;
        }//end if
    }//end if

    return 0;
}//end main
