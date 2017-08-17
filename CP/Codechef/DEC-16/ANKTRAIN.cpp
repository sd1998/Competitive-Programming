#include <iostream>
int main(){
    using namespace std;
    int t,N,q;
    cin >> t;
    cout << "\n";
    while(t){
      cin >> N;
      cout << "\n";
      if(N%8==0){
        q=N-1;  
        cout << q;
        cout << "SL";
      }
      else if(N%8==7){
          q=N+1;
            cout << q;
        cout << "SU";
      }
      else if(N%8==6){
          q=N-3;
           cout << q;
          cout << "UB";
      }
       else if(N%8==5){
          q=N-3;
           cout << q;
          cout << "MB";
      }
       else if(N%8==4){
          q=N-3;
           cout << q;
           cout << "LB";
      }
      else if(N%8==3){
          q=N+3;
           cout << q;
           cout << "UB";
      }
         else if(N%8==2){
          q=N+3;
           cout << q;
           cout << "MB";
      }
         else if(N%8==1){
          q=N+3;
           cout << q;
           cout << "LB";
      }
      cout << "\n";
        t--;
    }
} 