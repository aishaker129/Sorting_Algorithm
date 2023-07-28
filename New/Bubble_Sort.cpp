#include<bits/stdc++.h>
using namespace std;

int bubble_Sort(int a[],int n){
 for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
        if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
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
    bubble_Sort(a,n);
    print(a,n);

}
