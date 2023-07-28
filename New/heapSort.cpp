#include<iostream>
using namespace std;

void printa(int a[],int n){
 for(int i=1; i<=n; i++){
    cout<<a[i]<<" ";
 }
 cout<<endl;
}

int max_heap(int a[],int lastparent,int n){
 int left= 2*lastparent, right =2*lastparent+1;
 int largest;
 if(left<=n && a[left]>a[lastparent])
    largest = left;
 else
    largest = lastparent;
 if(right<=n && a[right]>a[largest])
    largest = right;
 if(largest != lastparent){
    swap(a[largest],a[lastparent]);
    max_heap(a,largest,n);
 }
}

int lastparent(int a[],int n){
 for(int i=n/2; i>=1; i--){
    max_heap(a,i,n);
 }
}
int heapSort(int a[],int n){
 int total = n;
 for(int i=n; i>=1; i++){
    swap(a[1],a[i]);
    total--;
    max_heap(a,1,total);
 }
}

int main(){
 int n; cin>>n;
 int a[n];
 for(int i=1;i<=n; i++){
    cin>>a[i];
 }
 lastparent(a,n);
 heapSort(a,n);
 printa(a,n);
}
