#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
int main(){
    std::ios::sync_with_stdio(false);
    using namespace std;
	int t;
    cin >> t;
 while(t){
   long long int sum=0,q,summ=0,count=0;
   int n,d;
   cin >> n;
   cin >> d;
   vector<long long int> Y(n);
   for(int i=0;i<=n-1;i++){
    cin >> Y[i];
    sum=sum+Y[i];
   }
   q=sum/n;
  if(d>=n){
    cout << -1;
    cout << "\n";
    t--;
    continue;
    }
    int count1=0;
    for(int i=0;i<=n-2;i++){
        if(Y[i]==Y[i+1]){
            count1++;
        }
    }
    if(count1==n-1){
        cout << 0;
        cout << "\n";
        t--;
        continue;
    }
    for(int i=0,j=i+d;i<=n-1-d;i++,j++){
      if(Y[i]==q){
       continue;
      }
      else if(Y[i]<q){
       Y[j]=Y[j]-q+Y[i];
       count=count+q-Y[i];
       Y[i]=q;
      }
     else if(Y[i]>q){
       Y[j]=Y[j]+Y[i]-q;
       count=count+Y[i]-q;
       Y[i]=q;
     }
    }
    count1=0;
    for(int i=0;i<=n-2;i++){
        if(Y[i]==Y[i+1]){
            count1++;
        }
    }
    if(count1==n-1){
   cout << count;
   cout << "\n";
    }
    else{
        cout << -1;
        cout << "\n";
    }
  t--;
 }  
	return 0;
} 