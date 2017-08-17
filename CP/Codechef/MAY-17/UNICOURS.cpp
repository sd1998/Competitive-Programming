#include <iostream>
#include <vector>
#include <algorithm>
 
int main(){
    using namespace std;
    int t;
    long int n;
    cin >> t;
    while(t){
        long int p=0;
        cin >> n;
        vector<long int> Y(n);
        vector<long int> G(n);
        for(long int i=0;i<=n-1;i++){
            cin >> Y[i];
            G[i]=0;
        }
        for(long int i=0;i<=n-1;i++){
            if(Y[i]!=0){
                ++G[Y[i]-1];
            }
        }
        for(long int i=0;i<=n-1;i++){
            if(G[i]==0){
                p++;
            }
            else if(G[i]>0){
                p=0;
            }
        }
        cout << p;
        cout << "\n";
        t--;
    }
    return 0;
} 