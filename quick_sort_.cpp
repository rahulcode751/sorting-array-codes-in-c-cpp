/// It is the recursion method this code have a time complexity of tc = O(logn)
/// This code only works when you take last element as pivot,better if you use middle element as pivot to learn the concept more precisely

#include<iostream>
using namespace std;

int partition(int a[],int s,int e){
     int i=s;
     int pivot = a[e];   /// here i have use last element as pivot it can be solve in more two ways by taking first or middle element as pivot
     for(int j=s;j<=e-1;j++){
        if(a[j] < pivot){
            swap(a[i],a[j]);
            i++;
        }
     }
     swap(a[i],a[e]);
     return i;
}

void quickSort(int a[],int s,int e){
    if(s>=e){
        return;
    }
    int p = partition(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
}

int main(){
	int a[] = {7,3,10,6,2,-5};   /// 6
  quickSort(a,0,6);           /// For even

  for(int i=0;i<6;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  
  int b[] = {7,3,10,6,2,-5,-9};  /// 7
  quickSort(b,0,6);           /// For odd

  for(int i=0;i<7;i++){
    cout<<b[i]<<" ";
  }
   return 0;
}

