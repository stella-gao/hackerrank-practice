#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string time;
    cin >> time;
    int len=time.length();

    if ((time[0]=='1') && (time[1]=='2')) {
        time[0]-=1;
        time[1]-=2;
    }
    if (time[len-2]=='P') {
        time[0]+=1;
        time[1]+=2;
    }
    time.erase(len-2,2);

    cout<<time<<endl;
    //if(time[])
    return 0;
}
