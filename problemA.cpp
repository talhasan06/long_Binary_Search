#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,j=0;
    cin>>n>>q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 1; i <= q; i++)
    {
        int key,s,e,mid;
        cin>>key;
        s=1;
        e=n;
        mid=s+(e-s)/2;
        while(s<=e){
            if(a[mid]==key){
                if(mid%2==0){
                    cout<<key<<" found at "<<mid+2<<endl;
                }else{
                    cout<<key<<" found at "<<mid<<endl;
                }
                return 0;
            }else if(key>a[mid]){
                s=mid+1;
            }else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        cout<<key<<" not found"<<endl;
    }
    
}