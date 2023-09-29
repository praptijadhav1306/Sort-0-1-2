#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> v{1, 0, 2, 0, 1, 0, 0, 2, 1, 2};
    int n = (int)v.size();
    int m =0, l=0, h=n-1;

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;


    while(m<=h){
        if(v[m]==0){
            swap(v[l],v[m]);
            m++;
            l++;
        }
        else if(v[m]==1){
            m++;
        }
        else{
            swap(v[h],v[m]);
            h--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}