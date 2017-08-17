include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
 
int main(){
    std::ios::sync_with_stdio(false);
    using namespace std;
    int t,n;
    cin >> t;
    while(t){
        cin >> n;
        vector<long int> Y(n);
        long long int sumn=0,max=0,sump=0,p1=0,min=INT_MAX;
        for(int i=0;i<=n-1;i++){
            cin >> Y[i];
            sumn=sumn+Y[i];
            if(Y[i]>=max){
                max=Y[i];
            }
            if(Y[i]>=0){
                sump=sump+Y[i];
                p1++;
            }
            if(Y[i]<min){
                min=Y[i];
            }
        }
        if(max<=0){
            cout << sumn;
            cout << "\n";
            t--;
            continue;
        }
        if(min>=0){
            cout << sump*p1;
            cout << "\n";
            t--;
            continue;
        }
        long long int sum1=0,sum2=sump*p1,sum3=0,sumq;
        int q=0,p=0;
        sort(Y.begin(),Y.end());
        int index;
        for(int i=0;i<=n-1;i++){
            if(Y[i]>=0){
                index=i-1;
                break;
            }
        }
        long long int sum=0;
        for(int i=index;i>=0;i--){
            if(Y[i]<0){
                if(q==0){
                sum1=(sump+Y[i])*(p1+1);
                }
                sump=sump+Y[i];
                p1++;
                sum2=sum2+Y[i];
                if(p!=0){
                    sum3=sumq+Y[i];
                    if(sum3>sum1){
                        q++;
                    }
                    sumq=sum3;
                }
                if(q==0){
                sumq=sum1;
                }
                if(sum1>=sum2 && sum1>=sum3 && q==0){
                    sum=sum1;
                }
                else if(sum2>=sum1 && sum2>=sum3 && q==0){
                    sum=sum2;
                }
                else if(sum3>=sum2 && q!=0){
                    sum=sum3;
                }
                else if(sum2>=sum3 &&  q!=0){
                    sum=sum2;
                }
                p++;
            }
            if(Y[i]>=0){
                break;
            }
        }
        cout << sum;
        cout << "\n";
        t--;
    }
    return 0;
} 