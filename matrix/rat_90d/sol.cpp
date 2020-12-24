#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
#define n 4


void rotate(int m[n][n]){
    //3.5. Transpose of a Matrix
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(m[i][j],m[j][i]);
        }
    }
    //reversing each row to get the effect of 90 deg rotate
    for(int i=0;i<n;i++){
        reverse(m[i],m[i]+n);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<m[i][j]<<" ";
        }cout<<endl;
    }
}

int main() {
	int m[n][n]={ { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
    rotate(m);
	return 0;
}