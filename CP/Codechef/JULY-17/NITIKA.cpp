#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
int main(){
    std::ios::sync_with_stdio(false);
    using namespace std;
    int t;
    cin >> t;
    string s;
    getline(cin,s);
    while(t){
        int count=0;
        string p="";
        getline(cin,s);
        for(int i=0;i<=s.length()-1;i++){
            if(s.at(i)==' '){
                count++;
            }
        }
        if(count==0){
            int prev=1;
            if(static_cast<int>(s.at(0))>=97){
             p=p+static_cast<char>(static_cast<int>(s.at(0))-32);
            }
            else{
                p=p+s.at(0);
            }
            for(int i=1;i<=s.length()-1;i++){
               if(static_cast<int>(s.at(i))>=65 && static_cast<int>(s.at(i))<=90){
                   p=p+s.substr(prev,i-prev);
                   p=p+static_cast<char>(static_cast<int>(s.at(i))+32);
                   prev=i+1;
               }
            }
            if(prev!=s.length()){
                p=p+s.substr(prev,s.length()-prev);
                prev=s.length();
            }
        }
        else{
            if(static_cast<int>(s.at(0))>=97){
            p=p+static_cast<char>(static_cast<int>(s.at(0))-32);
            }
            else{
               p=p+s.at(0); 
            }
            p=p+".";
            p=p+" ";
            count--;
            for(int i=1;i<=s.length()-1;i++){
                if(s.at(i)==' '){
                    if(count!=0){
                        i++;
                         if(static_cast<int>(s.at(i))>=97){
            p=p+static_cast<char>(static_cast<int>(s.at(i))-32);
            }
            else{
               p=p+s.at(i); 
            }
            p=p+".";
            p=p+" ";
            count--;
                    }
                    else if(count==0){
                        i++;
                        if(static_cast<int>(s.at(i))>=97){
            p=p+static_cast<char>(static_cast<int>(s.at(i))-32);
            }
            else{
               p=p+s.at(i); 
            }
            int prev1=i+1;
            for(int j=i+1;j<=s.length()-1;j++){
                if(static_cast<int>(s.at(j))>=65 && static_cast<int>(s.at(j))<=90){
                   p=p+s.substr(prev1,j-prev1);
                   p=p+static_cast<char>(static_cast<int>(s.at(j))+32);
                   prev1=j+1;
               }
            }
            if(prev1!=s.length()){
                p=p+s.substr(prev1,s.length()-prev1);
                prev1=s.length();
            }
                    }
                }
            }
        }
       cout << p;
       cout << "\n";
        t--;
    }
    return 0;
} 