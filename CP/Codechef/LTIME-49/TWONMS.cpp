#include <iostream>
#include <vector>
#include <algorithm>
 
long long int max(long long int a,long long int b){
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}
 
long long int min(long long int a,long long int b){
    if(a<=b){
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
        long long int a,b,n;
        cin >> a;
        cin >> b;
        cin >> n;
        if(n%2==0){
            cout << max(a,b)/min(a,b);
        }
        else{
            cout << max(a*2,b)/min(2*a,b);
        }
        cout << "\n";
        t--;
    }
    return 0;
} 