#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
typedef struct timetaken{
    int cobol;
    int rest;
}timetaken;
 
bool compare(timetaken a, timetaken b){
    return a.rest > b.rest;
}
 
int main(){
    std::ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<timetaken>citizens(n);
    for(int i=0;i<n;i++){
        timetaken a;
        cin >> a.cobol;
        int b,c;
        cin >> b >> c;
        a.rest = b+c;
        citizens[i] = a;
    }
    sort(citizens.begin(),citizens.end(),compare);
    int mintime = 0;
    int prevtime = 0;
    for(int i=0;i<n;i++){
        int time = prevtime + citizens[i].cobol + citizens[i].rest;
        if(time > mintime){
            mintime = time;
        } 
        prevtime = prevtime + citizens[i].cobol;
    }
    cout << mintime << std::endl;
    return 0;
} 