#include "bits/stdc++.h"
using namespace std;
int main(){
    int n , m ;
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<m ; j++){
            cin>>arr[i][j];
        }
    }
    
    int row_start = 0 , row_end = n-1 , col_start = 0 , col_end = m-1 ;
    //starting row
    
    while(row_start<=row_end && col_start<=col_end){
        for(int col = col_start ; col<=col_end && row_start<=row_end && col_start<=col_end; col++){

        cout<<arr[row_start][col]<<" ";
    }
    row_start++ ;

    //ending column

    for(int row = row_start ; row<=row_end && row_start<=row_end && col_start<=col_end; row++){
        cout<<arr[row][col_end]<<" ";
    }
    col_end--;

    //ending row

    for(int col = col_end ; col>=col_start && row_start<=row_end && col_start<=col_end; col-- ){
        cout<<arr[row_end][col]<<" ";
    }
    row_end--;

    //starting column
    
    for(int row = row_end ; row>=row_start && row_start<=row_end && col_start<=col_end; row--){
        cout<<arr[row][col_start]<<"  ";
    }
    col_start++; 
    
        
    }

    return 0 ;
}
