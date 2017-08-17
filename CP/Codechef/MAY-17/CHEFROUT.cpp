#include <iostream>
#include <cstring>
#include <algorithm>
#include <string>
#include <vector>
 
int main(){
    using namespace std;
    long int t;
    int m=0;
    cin >> t;
    string s,p,q;
    while(t){
        cin >> s;
        for(int i=0;i<=s.length()-2;i++){
            p=s.substr(i,1);
            q=s.substr(i+1,1);
            if(p>q)
            m++;
        }
        if(m>0){
            cout << "no";
            
        }
            else{
                cout << "yes";
            }
            cout << "\n";
        t--;
        m=0;
    }
    return 0;
} 