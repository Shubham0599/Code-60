#include <iostream>
#include <climits>
using namespace std;
#define N 5

int findMaxValue(int mat[][N]){
    int ma=INT_MIN;
    int mi=INT_MAX;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i<N-1&&j<N-1&&(mat[i][j]<mi)){
                mi=mat[i][j];
            }
             if(i>0&&j>0&&(mat[i][j]>ma)){
                ma=mat[i][j];
            }
        }
       
    }
    return (ma-mi);
}

int main() {
int mat[N][N] = { 
                { 1, 2, -1, -4, -20 }, 
                { -8, -3, 4, 2, 1 }, 
                { 3, 8, 6, 1, 3 }, 
                { -4, -1, 1, 7, -6 }, 
                { 0, -4, 10, -5, 1 } 
            }; 
    cout << "Maximum Value is "
        << findMaxValue(mat); 
	return 0;
}