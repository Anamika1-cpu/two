#include<bits/stdc++.h>
using namespace std;

int kthLargest(vector<int> &v, int k){
    int n = v.size();
    sort(v.begin(), v.end());
    return v[n-k];
}
int main(){
    vector<int> v{3,4,5,1,2,32};
    int k=4;
    cout<<kthLargest(v,k);
}
