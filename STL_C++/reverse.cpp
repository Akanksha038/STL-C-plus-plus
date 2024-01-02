#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // 
    reverse(v.begin(),v.end());
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    string str="AKANKSHA GUPTA";
    reverse(str.begin(),str.end());
     for(int i=0;i<str.size();i++){
        cout<<str[i]<<" ";
    }


    
}