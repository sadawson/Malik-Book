#include <iostream>
using namespace std;

int main () {
    int x,y,z;
    cin >> x
        >> y
        >> z;    
  
    if (x > y && x > z) {
        cout << x << endl;
        if (y > z) {
            cout << y << endl << z << endl;
        }
        else {
            cout << y << endl << z << endl;
        }//end if
    }//end if
    else if (y > x && y > z) {
        cout << y << endl;
        if (x > z) {
            cout << x << endl << z << endl;
        }
        else {
            cout << z << endl << x << endl;
        }//end if
    }//end if
    else if (z > x && z > y) {
        cout << z << endl;
        if (y > x) {
            cout << y << endl << x << endl;
        }
        else {
            cout << x << endl << y << endl;
        }//end if
    }//end if

    return 0;
}//end main
