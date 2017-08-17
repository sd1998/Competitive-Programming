#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
long long int gcd(long long int a,long long int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}
 
long long int inv(long long int a,long long int m){
    long long int q = m,t,u;
    long long int a1= 0, b= 1;
    if (m == 1){
      return 0;
    }
    while (a>1){
        u=a/m;
        t = m;
        m=a%m;
        a=t;
        t=a1;
        a1=b-u*a1;
        b=t;
    }
    if (b<0){
       b=b+q;
    }
    return b;
}
 
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    using namespace std;
    int t;
    cin >> t;
    while(t){
        long long int n;
        cin >> n;
        if(n==0){
            cout << 0;
            cout << " ";
            cout << 0;
            t--;
            continue;
        }
        long long int num1,num2,num3,num11,num22,num4,num5;
        num1=n;
        num2=n-1;
        num3=2*n-3;
        if(num1%2==1){
            num2=num2/2;
        }
        else{
            num1=num1/2;
        }
        num4=gcd(num1,num3);
        num1=num1/num4;
        num3=num3/num4;
        num5=gcd(num2,num3);
        num2=num2/num5;
        num3=num3/num5;
        num11=((num1%1000000007)*(num2%1000000007))%1000000007;
        num11=num11%1000000007;
        num22=((num1%1000000009)*(num2%1000000009))%1000000009;
        num22=num22%1000000009;
        long long int ans=((num11%1000000007)*(inv(num3,1000000007)%1000000007))%1000000007;
        long long int ans1=((num22%1000000009)*(inv(num3,1000000009)%1000000009))%1000000009;
        cout << ans;
        cout << " ";
        cout << ans1;
        cout << "\n";
        t--;
    }
    return 0;
} 