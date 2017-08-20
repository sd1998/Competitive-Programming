#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
 
int main(){
    std::ios::sync_with_stdio(false);
    using namespace std;
	int t;
	cin >> t;
	while(t){
		int n,m,index=-1;
		string s;
		long int max=0,count=0,sum=0,count1=0;
		cin >> n;
		cin >> m;
		vector<vector<int> > Y(n+1,vector<int> (m+1,0));
		vector<long int> min(n+1,0);
		vector<long int> off(m+1,0);
		vector<long int> maxo(m+1,0);
		vector<long int> maxo1(m+1,0);
		for(int i=1;i<=n;i++){
		cin >> min[i];
		}
		for(int i=1;i<=m;i++){
			cin >> off[i];
			cin >> maxo[i];
			maxo1[i]=maxo[i];
		}
		for(int i=1;i<=n;i++){
			cin >> s;
			for(int j=1;j<=m;j++){
				Y[i][j]=(int)s.at(j-1)-48;
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(Y[i][j]==1){
					if(maxo[j]>0){
						if(off[j]>=min[i]){
							if(off[j]>max){
							max=off[j];
							index=j;
							}
						}
					}
				}
			}
			if(index>=0){
			   maxo[index]--;
			    sum=sum+off[index];
			    count++;
			}
			max=0;
			index=-1;
		}
		for(int i=1;i<=m;i++){
			if(maxo1[i]==maxo[i] && maxo1[i]!=0){
			    count1++;
			}
		}
		cout << count;
		cout << " ";
		cout << sum;
		cout << " ";
		cout << count1;
		cout << "\n";
		t--;
	}
	return 0;
} 