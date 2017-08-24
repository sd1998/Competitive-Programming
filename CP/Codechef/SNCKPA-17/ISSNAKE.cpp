#include <iostream>
#include <string>
using namespace std;
 
int main() {
	int t;
	cin>>t;
 
	while(t--)
	{
	    int n;
	    cin>>n;
 
	    string str1, str2;
	    cin>>str1>>str2;
 
	    int k,prev_k;
 
	    if(str1[0] == '.' && str2[0] == '.') prev_k=0;
	    else if(str1[0] == '.' && str2[0] == '#') prev_k=1;
	    else if(str1[0] == '#' && str2[0] == '.') prev_k=2;
	    else prev_k=3;
 
	    bool ans=true;
	    int prev_3=0;
	    for(int i=1; i<str1.length(); i++)
	    {
	        if(str1[i] == '.' && str2[i] == '.') k=0;
	        else if(str1[i] == '.' && str2[i] == '#') k=1;
	        else if(str1[i] == '#' && str2[i] == '.') k=2;
	        else k=3;
 
	        if(k==0 && prev_k !=0)
	        {
	           for(int j=i+1; j<str1.length(); j++)
	            if(str1[j] != '.' || str2[j] != '.') {ans=false; break;}
	        }
 
	        else if(k==1 && prev_k==2) {ans=false;}
 
	        else if(k==2 && prev_k==1) {ans=false;}
 
	        else if(k==3 && prev_k==3) {if(prev_3 == 1) prev_3=2; else if(prev_3 == 2) prev_3 = 1;}
 
	        else if(prev_k==3) 
	        {   
	            if(k==1 && prev_3 == 1) ans=false; 
	            else if(k==2 && prev_3 == 2) ans=false;
	        }
 
	        else if(k==3) {prev_3 = prev_k;}
 
	        if(!ans) break;
 
	        prev_k = k;
	    }
 
	    if(ans) cout<<"yes\n";
	    else cout<<"no\n";
	}
 
	return 0;
} 