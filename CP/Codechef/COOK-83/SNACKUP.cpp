#include <iostream>
#include <vector>
#include <algorithm>
 
int main(){
    using namespace std;
	int t;
	int n,rec;
	cin >> t;
	while(t){
		cin >> n;
		cout << n;
		cout << "\n";
		for(int i=0;i<=n-1;i++){
			cout << n;
			cout << "\n";
			for(int j=0;j<=n-1;j++){
				rec=(i+j)%n;
				cout<<j+1;
				cout << " ";
				cout << rec+1;
				cout << " ";
				cout << (rec+1)%n+1;
				cout << "\n";
			}
		}
		t--;
	}
	return 0;
} 