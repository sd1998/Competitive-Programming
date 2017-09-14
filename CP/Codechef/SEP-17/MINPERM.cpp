#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
int main(){
    using namespace std;
   int t;
   cin >> t;
   while(t){
   	int n;
   	cin >> n;
   	vector<int> Y1(n+1);
   	if(n%2!=0){
   		for(int i=1;i<=n;i++){
   			if(i==(n-1)){
   			Y1[i]=i+1;
   			}
   			else if(i==n){
   			    Y1[i]=i-2;
   			}
   			else if(i%2==0){
   			    Y1[i]=i-1;
   			}
   			else if(i%2!=0){
   			    Y1[i]=i+1;
   			    }
   		}
   	}
   	else {
   		for(int i=1;i<=n;i++){
   			if(i==n){
   			    Y1[i]=i-1;
   			}
   			else if(i%2!=0){
   			    Y1[i]=i+1;
   			}
   			else if(i%2==0){
   			    Y1[i]=i-1;
   			}
   		}
   	}
   	for(int i=1;i<=n;i++){
   	    cout << Y1[i];
   	    cout << " ";
   	}
   	cout << "\n";
   	t--;
   }
	return 0;
} 