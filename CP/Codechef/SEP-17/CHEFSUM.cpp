#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <climits>
 
int main(){
    using namespace std;
    int t;
    cin >> t;
    while(t){
        int n;
        long long int sum=0;
        cin >> n;
        vector<int> Y(n);
        for(int i=0;i<=n-1;i++){
            cin >> Y[i];
            sum=sum+Y[i];
        }
        vector<long long int>  Y1(n);
        long long int min=INT_MAX,index=0;
        for(int i=0;i<=n-1;i++){
            Y1[i]=sum+Y[i];
        }
        vector<long long int>::iterator k=min_element(Y1.begin(),Y1.end());
        for(int i=0;i<=n-1;i++){
            if(*k==Y1[i]){
                cout << i+1;
                cout << "\n";
                break;
            }
        }
        t--;
    }
} 