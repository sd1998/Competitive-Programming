#include <iostream>
#include <vector>
#include <algorithm>
 
int main(){
    using namespace std;
    int s,N;
    cin >> s;
    while(s){
        int p=0,q=0;
        cin >> N;
        vector<int> Y(N);
        for(int i=0;i<=N-1;i++){
            cin >> Y[i];
        }
        if(N%2==0){
            cout << "no";
            cout << "\n";
            s--;
            continue;
        }
        if(Y[0]!=1 || Y[N-1]!=1){
            cout << "no";
            cout << "\n";
            s--;
            continue;
        }
        for(int i=0;i<=(N/2)-1;i++){
            if(Y[i+1]-Y[i]!=1){
                cout << "no";
                cout << "\n";
                p++;
                break;
            }
        }
        if(p==0){
            for(int i=(N/2);i<=N-2;i++){
                if(Y[i]-Y[i+1]!=1){
                    cout << "no";
                    cout << "\n";
                    q++;
                    break;
                }
            }
        }
        if(p==0 && q==0){
            cout << "yes";
            cout << "\n";
        }
        s--;
    }
    return 0;
} 