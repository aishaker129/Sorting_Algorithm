#include<iostream>
using namespace std;

int marge(int a[],int l,int mid,int r){
 int b= mid-l+1;
 int c =r-mid;
 int s[b],d[c];
 for(int i=0; i<b; i++){
    s[i]=a[l+i];
 }
 for(int i=0; i<c; i++){
    d[i]=a[mid+1+i];
 }
 int i=0,j=0,k=l;
 while(i<b && j<c){
    if(s[i]<d[j]){
        a[k]=s[i];
        k++;
        i++;
    }
    else{
        a[k]=d[j];
        k++;
        j++;
    }
 }
 while(i<b){
    a[k]=s[i];
        k++;
        i++;
 }
 while(j<c){
    a[k]=d[j];
        k++;
        j++;
 }
}

int MargeSort(int a[],int l,int r){
 if(l<r){
        int mid = (l+r)/2;
    MargeSort(a,l,mid);
    MargeSort(a,mid+1,r);

   marge( a,l,mid,r);
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
    int l=0, r= n-1;
    MargeSort(a,l,r);
    print(a,n);
    return 0;
}

