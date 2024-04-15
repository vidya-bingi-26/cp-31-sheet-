#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        cin.ignore();
        string s;
        int count=0;
        getline(cin,s);

        
        bool flag=true;
        for(int j=0;j<s.length();j++){
            if(s[j]=='.'){
                count++;
            }
            if(s[j]=='.' && s[j]==s[j+1] && s[j+1]==s[j+2]){
                cout<<"2";
                flag=false;
                break;
            }
            
        }
        if(flag){
            cout<<count;
        }
        cout<<endl;
    }
    
    return 0;
}