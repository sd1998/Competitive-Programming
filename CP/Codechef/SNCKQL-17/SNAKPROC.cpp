#include <iostream>
#include <string>
#include <cmath>
 
int main(){
    using namespace std;
    int R;
    int N;
    string s;
    cin >> R;
    while(R){
        int t1=0,t2=0,p=0;
    cin >> N;
    cin >> s;
    for(int i=0;i<=N-1;i++){
        if(s.substr(i,1).compare("H")==0){
            t1++;
        }
        if(s.substr(i,1).compare("T")==0){
            t1--;
        }
        if(t1>=2 || t1<0){
            cout << "Invalid";
            p++;
            break;
        }
    }
     if(t1==1){
            cout << "Invalid";
            p++;
        }
    if(p==0){
        cout <<  "Valid";
    }
    cout << "\n";
        R--;
    }
    return 0;
} 