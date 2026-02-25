#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> a(n+1,1); //n+1 as we need to index to n, 1 is the default value (1: prime, 0:composite)
    a[0]=a[1] = 0; //0 and 1 are not prime
    for(int p=2;p*p<=n;p++){
        if(a[p]==1){
            for(int j=p*p;j<=n;j+=p){
                a[j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==1){
            cout << i << " ";
        }
    }
    cout << endl;
}