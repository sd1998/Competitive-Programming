#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
 
long long int max(long long int a,long long int b){
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}
 
int main(){
    std::ios::sync_with_stdio(false);
    using namespace std;
    int t;
    cin >> t;
    while(t){
        long int n,b;
        cin >> n;
        cin >> b;
        if(n<=b){
            cout << 0;
            cout << "\n";
            t--;
            continue;
        }
        long long int sum=0;
        long int q=n/2;
        long int q1=(n-q)%b;
        long long int a=(n-q)/b;
        long int q2=q;
        q=q+q1;
        q2=q2-(b-q1);
        long long int q3=max(q*a,q2*(a+1));
        cout << q3;
        cout << "\n";
        t--;
    }
    return 0;
} 