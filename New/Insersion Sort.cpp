#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int a[],int n){
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        if(a[i]>a[j]){
            swap(a[i],a[j]);
        }
    }
 }
}

void print(int a[],int n){
 for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
 }
 cout<<endl;
}

int main(){
 int n; cin>>n;
 int a[n];
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 LinearSearch(a,n);
 print(a,n);
 return 0;
}
