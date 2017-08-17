#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <ctime>
 
int main(){
    using namespace std;
    int t,n;
    cin >> t;
    srand(time(0));
    while(t){
       cin >> n;
       int u=399;
       for(int i=0;i<=n-1;i++){
           cout << u+i;
           cout << " ";
       }
       cout << "\n";
        t--;
    }
    return 0;
} 