#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
int main() {
    using namespace std;
	int t;
	cin >> t;
	while(t){
    string a,b;		
	cin >> a;
	cin >> b;
    int p=0,q=0,r=0;
	vector<int> Y(256,0);
	vector<int> Y1(256,0);
	for(int i=0;i<=a.length()-1;i++){
			Y[(int)a.at(i)]++;
		}
		for(int i=0;i<=b.length()-1;i++){
			Y1[(int)b.at(i)]++;
		}
		for(int i=0;i<=255;i++){
		     if(Y[i]>0 && Y1[i]==0){
		         q=1;
		     }
		     else if(Y1[i]>0 && Y[i]==0){
		         r=1;
		     }
		     if(Y[i]>1 && Y1[i]==0){
		         p=1;
		     }
		}
		if(p==1 ||(q==1 && r==0)){
		    cout << "A";
		    cout << "\n";
		}
		else{
		    cout << "B";
		    cout << "\n";
		}
		t--;
	}
	return 0;
}  