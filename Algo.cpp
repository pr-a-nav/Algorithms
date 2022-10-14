#include<bits/stdc++.h>

using namespace std;

int getpivot(int arr[], int n){

    int s=0;
    int m=n-1;
    int mid = s+((m-s)/2);

    while(s<m){

        if (arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            m=mid;
            
        }
        mid= s+((m-s)/2);
    }
    return m;

}

int main(){

    int arr[5]= {3,8,10,17,1};
    cout<<"pivot is "<<getpivot(arr,5);

}

