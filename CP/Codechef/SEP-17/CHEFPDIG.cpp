#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
int main(){
    using namespace std;
	int t;
	cin >> t;
	while(t){
		string s;
		cin >> s;
		vector<int> Y(10,0);
		vector<char> Y1;
		for(int i=0;i<=s.length()-1;i++){
		 Y[s.at(i)-48]++;
		}
		for(int i=65;i<=90;i++){
		    int a=i%10;
		    int b=i/10;
		    if(a!=b){
		        if(Y[a]!=0 && Y[b]!=0){
		            cout << (char)(i);
		        }
		    }
		    else{
		        if(Y[a]>1){
		            cout << (char)(i);
		        }
		    }
		}
		if(Y1.size()>0){
		    for(int i=0;i<=Y1.size()-1;i++){
		        cout << Y1[i];
		    }
		}
		cout << "\n";
		t--;
		Y1.clear();
	}
	return 0;
} 