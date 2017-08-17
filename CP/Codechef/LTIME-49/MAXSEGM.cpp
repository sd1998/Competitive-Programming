#include<bits/stdc++.h>
using namespace std;
 
vector<long int> A;
vector<long int> B;
 
long long int calculate(long int n)
{
    unordered_set<long int> s;
    unordered_set<long int> s1;
    long int j = 0;
    long long int sum=0,sum1=0;
    long long int max=0;
    for (int i=0; i<n; i++)
    {
        while (j < n && s.find(A[j]) == s.end())
        {
            s.insert(A[j]);
            sum=sum+B[j];
            j++;
        }
     if(max<=sum){
         max=sum;
     }
        s.erase(A[i]);
        sum=sum-B[i];
    }
 
    return max;
}
 
int main()
{
    int t;
    cin >> t;
    while(t){
        long int n;
        cin >> n;
        A.resize(n);
        B.resize(n);
        for(long int i=0;i<=n-1;i++){
            cin >> A[i];
        }
        for(long int b=0;b<=n-1;b++){
            cin >> B[b];
        }
        cout << calculate(n);
        cout << "\n";
        A.clear();
        B.clear();
        t--;
    }
}  