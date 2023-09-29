#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> v {1,0,2,0,1,0,0,2,1,2};
    int n =(int)v.size();

    for(int i=0; i <n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end());

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}