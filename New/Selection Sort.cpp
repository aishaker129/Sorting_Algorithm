#include<bits/stdc++.h>
using namespace std;

int SelectionSort(int a[],int n){
    int i,j,m;
 for( i=0; i<n-1; i++){
        m=i;
    for( j=i+1;j<n; j++){
        if(a[m]>a[j]){
            m = j;
        }
    }
    if(m!=i){
        swap(a[m],a[i]);
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
 SelectionSort(a,n);
 print(a,n);
}
