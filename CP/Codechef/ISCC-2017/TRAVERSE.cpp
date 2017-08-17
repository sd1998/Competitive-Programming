#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
 
int main(){
    std::ios::sync_with_stdio(false);
    using namespace std;
     int t;
     long int m;
     cin >> t;
     while(t){
         long int x=0,y=0;
         cin >> m;
         if(m==0){
             cout << 0;
             cout << " ";
             cout << 0;
             cout << "\n";
             t--;
             continue;
         }
         long int p=0;
         while(m!=p){
             p++;
             if(p%3==1){
                 x=x+1;
             }
             if(p%3==2 || p%3==0){
                 y=y+1;
             }
         }
         cout << x;
         cout <<  " ";
         cout << y;
         cout << "\n";
         t--;
     }
     return 0;
} 