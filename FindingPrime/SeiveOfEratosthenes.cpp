#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> a(n+1,1);
    a[0]=a[1]=0;
    for(int p=2;p*p<=n;p++){
        if(a[p]==1){
            for(int j=p*p;j<=n;j+=p){
                a[j]=0;
            }
        }
    }
    vector <int> l;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            l.push_back(i);
        }
    }
    for(int i=0;i<l.size();i++){
        cout << l[i] << " ";
    }
    cout << endl;
}