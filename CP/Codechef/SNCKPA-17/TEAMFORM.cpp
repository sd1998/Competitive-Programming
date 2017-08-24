#include <iostream>
#include <vector>
#include <algorithm>
 
int main(){
    using namespace std;
    int t,n,m;
    cin >> t;
    while(t){
        cin >> n;
        cin >> m;
        int x,y;
        vector<pair<int,int> > Y(m);
        for(int i=0;i<=m-1;i++){
            cin >> x;
            cin >> y;
            Y[i]=make_pair(x,y);
        }
        if(n%2 != 0){
            cout << "no";
            cout << "\n";
        }
        else{
            cout << "yes";
            cout << "\n";
        }
        t--;
    }
    return 0;
} 