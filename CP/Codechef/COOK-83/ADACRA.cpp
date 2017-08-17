#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
int main(){
    using namespace std;
    int t;
    string s;
    cin >> t;
    while(t){
        int count=0;
        int p=0;
        int p1=0,p2=0;
        cin >> s;
            int p11=0,p22=0;
            int q=0;
            for(int i=0;i<=s.length()-1;i++){
                if(s.at(i)=='D'){
                    p++;
                }
                if(s.at(i)=='U'){
                    q++;
                }
                if(s.at(i)=='D' && q>0){
                    p22++;
                    q=0;
                }
                else if(s.at(i)=='U' && p>0){
                    p11++;
                    p=0;
                }
            if(s.at(s.length()-1)=='D'){
                p11++;
            }
            else if(s.at(s.length()-1)=='U'){
                p22++;
            }
            if(p11>p22){
                count=p22;
            }
            else{
                count=p11;
            }
        }
        cout << count;
        cout << "\n";
        t--;
    }
    return 0;
} 