#include <iostream>
#include <cmath>
 
int main(){
         using namespace std;
	int t;
	cin >> t;
	while(t--){
		long long int u,v,x;
		cin >> u;
		cin >> v;
		cin >> x;
		double ans = x/(double)(u+v);
		printf("%.10f\n", ans);
	}
	return 0;
}  