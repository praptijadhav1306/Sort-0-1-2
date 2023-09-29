#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{1, 0, 2, 0, 1, 0, 0, 2, 1, 2};
    int n = (int)v.size();
    int count0=0, count1=0, count2=0;
    
    for(int i =0; i<n; i++){
        if(v[i]==0){ count0++;}
        else if(v[i]==1){ count1++;}
        else{ count2++;}
    }

    for (int i = 0; i < count0; i++)
    {
        v[i] = 0;
        
    }
    for (int i = count0; i < count0+count1; i++)
    {
        v[i] = 1;
    }
    for (int i = count0 + count1; i < count0 + count1+count2; i++)
    {
        v[i] = 2;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}