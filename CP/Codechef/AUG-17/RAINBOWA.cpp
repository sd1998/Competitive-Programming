#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
 
int main(){
    using namespace std;
  int t;
  cin >> t;
  while(t){
      int n;
      cin >> n;
      vector<int> Y(n);
      for(int i=0;i<=n-1;i++){
          cin >> Y[i];
      }
      int temp=0;
      for(int i=0;i<=n-1;i++){
          if(Y[i]>7){
              cout << "no";
              cout << "\n";
              temp++;
              break;
          }
      }
      if(temp>0){
          t--;
          continue;
      }
      vector<int> Y1(7,0);
      int p=0,index;
      for(int i=0;i<=n-1;i++){
                   if(p>0 && Y[i]!=7){
                       index=i;
                       break;
                   }
         Y1[Y[i]-1]++;
         if(Y[i]==7){
             p++;
         }
      }
      for(int j=index;j<=n-1;j++){
          Y1[Y[j]-1]--;
      }
      int count=0;
      for(int i=0;i<=5;i++){
          if(Y1[i]!=0){
              count++;
              break;
          }
      }
      if(Y[6]>0 && count==0){
          cout << "yes";
      }
      else{
          cout << "no";
      }
      cout << "\n";
      t--;
  }
  return 0;
} 