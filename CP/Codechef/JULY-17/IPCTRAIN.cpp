#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
 
using namespace std;
 
typedef struct node1{
    long long int d;
    long long int s;
    long long int t;
}node;
 
vector<node> Y;
vector<int> heap;
long long int l=0;
 
bool srt(node a,node b){
    return (a.d < b.d);
}
 
void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
 
int p(int i){
    return (i-1)/2;
}
 
int ri(int i){
    return (2*i+2);
}
 
int le(int i){
    return (2*i+1);
}
 
void insert(int k){
    l++;
    int i=l-1;
    heap[i]=k;
    while (i!=0 && Y[heap[p(i)]].s < Y[heap[i]].s){
       swap(&heap[i],&heap[p(i)]);
       i=p(i);
    }
}
 
void heapify(int i){
    int l1=le(i);
    int r=ri(i);
    int max=i;
    if(l1<l && Y[heap[l1]].s>Y[heap[i]].s){
        max=l1;
    }
    if(r<l && Y[heap[r]].s>Y[heap[max]].s){
        max=r;
    }
    if(max!=i){
        swap(&heap[i], &heap[max]);
        heapify(max);
    }
}
 
void delete1(){
    if (l==1){
        l--;
        return;
    }
    int max=heap[0];
    heap[0]=heap[l-1];
    l--;
    heapify(0);
    return;
}
 
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    using namespace std;
int t;
cin >> t;
while(t){
    l=0;
    int n,d;
    cin >> n;
    cin >> d;
    Y.resize(n);
    heap.resize(n);
    for(int i=0;i<=n-1;i++){
        cin >> Y[i].d;
        cin >> Y[i].t;
        cin >> Y[i].s;
    }
    sort(Y.begin(),Y.end(),srt);
    int j=0;
    for(int i=1;i<=d;i++){
        while(j<=n-1 && Y[j].d==i){
            insert(j);
            j++;
        }
        if(l==0){
            continue;
        }
            int x=heap[0];
            Y[x].t--;
        if(Y[x].t<=0){
            delete1();
        }
    }
    long long int ans=0;
    for(int i=0;i<=n-1;i++){
        ans=ans+(Y[i].t*Y[i].s);
    }
    cout << ans;
    cout << "\n";
    t--;
    Y.clear();
    heap.clear();
}
return 0;
} 