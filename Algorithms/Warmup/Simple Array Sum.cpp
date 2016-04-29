#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin>>N;
    int x,sum=0;
    for(int i=0;i<N; i++){
        cin>>x;
        sum+=x;
    }
    cout<<sum<<endl;
    return 0;
}
