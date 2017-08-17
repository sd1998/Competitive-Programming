#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
int max(int a,int b){
   if(a>=b){
       return a;
   }    
   else{
       return b;
   }
}
 
int main(){
    std::ios::sync_with_stdio(false);
    using namespace std;
	int t;
    cin>>t;
    while(t){
	int ans=0,i=0,temp=0,p=0;
	string s;
	cin >> s;
	while(i<=s.length()-1){
		int j=0,k=0;
		while(i<=s.length()-1 && s.at(i)!='>'){
    		if(s.at(i)=='<')
    		j++;
    		i++;
    	}
 
    	while(i<=s.length()-1 && s.at(i)!='<' ){
    		if(s.at(i)=='>')
    		k++;
    		i++;
    	}
    	if(p==0){
    	temp=max(j,k) +1;
		ans=temp;
		p++;
		}
    	else{
		temp=max(j,k)+1;
        ans=max(ans,temp);
		}
	}
	cout << ans;
	cout << "\n";
	t--;
	}
       return 0;
}  