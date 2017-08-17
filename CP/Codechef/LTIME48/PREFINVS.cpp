#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <cstdlib>
 
int main(){
    using namespace std;
    char *q;
    string s;
    cin >> s;
    int count=0;
    q=(char *)malloc(sizeof(char)*(s.length()+1));
    strcpy(q,s.c_str());
    for(int i=strlen(q)-1;i>=0;i--){
        if(q[i]=='1'){
            for(int j=0;j<=i;j++){
                if(q[j]=='0'){
                    q[j]='1';
                }
                else{
                    q[j]='0';
                }
            }
            count++;
        }
    }
    cout << count;
    return 0;
} 