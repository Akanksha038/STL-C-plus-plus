#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // it return pointer of min. element
    min_element(v.begin(),v.end());

    // it return value of min. element in this vector
    int min=* min_element(v.begin(),v.end());
    cout<<"minimum element is "<< min<<endl;;

    // it return pointer of max element
    max_element(v.begin(),v.end());

    // it return value of max. element in this vector
    int max=* max_element(v.begin(),v.end());
    cout<<"maximum element will be "<<max <<endl;


    // we tell that find min and max after  lefting 1st 2 element from stating


     // it return pointer of min. element after lefting 2 element in this vector
    min_element(v.begin()+2,v.end());

    // it return value of min. element  after lefting 2 element in this vector
    int min1=* min_element(v.begin()+2,v.end());
    cout<<"minimum element is after lefting 2 element "<< min1<<endl;;

    // it return pointer of max element after left 1st 2 element will be
    max_element(v.begin()+2,v.end());

    // it return value of max. element after left 1st 2 element will be in this vector
    int max1=* max_element(v.begin()+2,v.end());
    cout<<"maximum element after left 1st 2 element will be "<<max1 <<endl;





}