#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
 
int main(){
    using namespace std;
    int t;
	cin >> t;
	while(t){
		string a,b;
		cin >> a;
		cin >> b;
		vector<char> Y(27,0);
		vector<bool> Y1(27,0);
		int p,q,j;
		if(a.length()==b.length()){
			for(j=0;j<=a.length()-1;j++) {
					p=b.at(j)-96;
					q=a.at(j)-96;
				if(Y[p]==0) {
					if(Y1[q]==0){
						Y[p]=a.at(j);
						Y1[q]=1;
					}
					else{
						cout << "NO";
						break;
					}
				}
				else{
					if(Y[p]!=a.at(j)){
						cout << "NO";
						break;
					}
				}
			}
		}
		else{
			cout << "NO";
		}
		if(j==a.length()){
			cout<<"YES";
		}
		cout << "\n";
		t--;
}
	return 0;
} 