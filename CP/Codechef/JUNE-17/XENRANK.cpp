#include <iostream>
#include <vector>
#include <algorithm>
 
int main(){
    using namespace std;
    int t;
    long int u,v;
    long long int n=0;
    cin >> t;
    while(t){
        cin >> u;
        cin >> v;
        long long int sum=1;
        n=n+u+v+1;
        sum=sum*n*(n+1)/2;
        sum=sum-v;
        cout << sum;
        cout << "\n";
        t--;
        n=0;
    }
    return 0;
}  