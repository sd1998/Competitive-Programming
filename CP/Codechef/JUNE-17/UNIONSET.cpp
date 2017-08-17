#include <iostream>
#include <vector>
#include <algorithm>
 
int main(){
    std::ios::sync_with_stdio(false);
    using namespace std;
    int t,n,k;
    cin >> t;
    while(t){
        cin >> n;
        cin >> k;
        vector<vector<int> > Y(n);
        vector<vector<int> > Y1(n);
        int size;
        for(int i=0;i<=n-1;i++){
            cin >> size;
            Y[i].resize(size+1);
            Y1[i].resize(k);
            Y[i][0]=size;
            for(int j=1;j<=size;j++){
                cin >> Y[i][j];
            }
            for(int j=1;j<=size;j++){
                Y1[i][Y[i][j]-1]=1;
            }
        }
        int count=0;
        int final=0;
        for(int i=0;i<=n-1;i++){
            for(int j=i+1;j<=n-1;j++){
                if(Y[i][0]+Y[j][0]>=k){
                for(int l=0;l<=k-1;l++){
                    if(Y1[i][l]==1 || Y1[j][l]==1){
                        count++;
                    }
                }
            }
              if(count==k){
                    final++;
                }
                count=0;
            }
        }
        cout << final;
        cout << "\n";
        t--;
    }
    return 0;
} 