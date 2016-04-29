#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    ll x,sum=0;
    for(int i=0;i<t;i++){
        cin>>x;
        sum+=x;
    }
    cout<<sum<<endl;
    return 0;
}
