#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int low,int high){
   int i=low,j=high;
   int pvt = a[low];
   while(i<j){
      while(a[i]<=pvt){
         i++;
     }
      while(a[j]>pvt){
         j--;
     }
      if(i<j){
        swap(a[i],a[j]);
     }
   }
   swap(a[low],a[j]);
   return j;
}

int quickSort(int a[],int low, int high){
 if(low<high){
    int part=partition(a,low,high);
    quickSort(a,low,part-1);
    quickSort(a,part+1,high);
 }
}

int main(){
 int n;
 cin>>n;
 int a[n];
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 quickSort(a,0,n-1);
 for(int i=0;i<n; i++){
    cout<<a[i]<<" ";
 }
 cout<<endl;
 return 0;
}
