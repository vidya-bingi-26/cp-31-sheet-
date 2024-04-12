#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
for(int i=1;i<n;i++){
    if(arr[i]<arr[i-1]){
        return false;
    }
}
return true;
}
int main(){
int t;
cin>>t;
for(int z=0;z<t;z++){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(k==1){
        if(issorted(arr,n)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"YES"<<endl;
    }
}
    return 0;
}