#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
int main(){
    using namespace std;
    int t;
    int g1,g2,g3,g4;
    cin >> t;
    while(t){
        vector<string> Y(4);
        vector<int> U(4);
        for(int i=0;i<=3;i++){
            cin >> Y[i];
            cin >> U[i];
        }
        for(int i=0;i<=3;i++){
            if(Y[i].compare("RealMadrid")==0){
                g1=U[i];
            }
            else if(Y[i].compare("Malaga")==0){
                g2=U[i];
            }
            else if(Y[i].compare("Barcelona")==0){
                g3=U[i];
            }
            else{
                g4=U[i];
            }
        }
        if(g1 < g2 && g3 > g4){
            cout << "Barcelona\n";
        }
        else{
            cout << "RealMadrid\n";
        }
        t--;
    }
    return 0;
}  