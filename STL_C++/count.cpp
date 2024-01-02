#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //  hamme pata lagana hai ki vector v me 5 kitni baar aaya hai
    int counting=count(v.begin(),v.end(),5);
    cout<<counting;

}