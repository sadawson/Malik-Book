#include <iostream>
using namespace std;

int main () {
    int score[4];
    float weight[4];
    for (int i=0;i<4;i++) {
        cout << "Enter score: ";
        cin >> score[i];
        cout << "Enter weight: ";
        cin >> weight[i];
    }
   
    float total_wx=0; 
    float total_w=0; 
    cout << "Values entered";
    for (int i=0;i<4;i++) {
        total_wx += score[i] * weight[i]; 
        total_w += weight[i];
    }
    cout << "Weighted average: "  << total_wx / total_w <<endl;
     
    
    return 0;
}//end main
