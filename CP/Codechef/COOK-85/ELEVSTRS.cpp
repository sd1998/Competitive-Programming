#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
 
int main(){
    std::ios::sync_with_stdio(false);
    using namespace std;
    int t;
    cin >> t;
    while(t){
        double n,v1,v2;
        cin >> n;
        cin >> v1;
        cin >> v2;
        double s1,s2;
        s1=2*n/v2;
        s2=sqrt(2)*n/v1;
        if(s1<=s2){
            cout << "Elevator";
        }
        else{
            cout << "Stairs";
        }
        cout << "\n";
        t--;
    }
    return 0;
}