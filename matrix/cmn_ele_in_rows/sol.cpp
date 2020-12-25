#include <iostream>
#include <unordered_map> 
using namespace std;

void findelem(int m[4][5],int r,int c){
    unordered_map <int ,int> mp;
    for(int j=0;j<c;j++){
        mp[m[0][j]]=1;
    }
    for(int i=1;i<r;i++){
        for(int j=0;j<c;j++){
            if(mp[m[i][j]]==i){
               mp[m[i][j]]++;
               if(i==r-1)cout<<m[i][j]<<" ";
            }
        }
    }
}

int main() {
		int m[4][5]={{1, 2, 1, 4, 8},
             {3, 7, 8, 5, 1},
             {8, 7, 7, 3, 1},
             {8, 1, 2, 7, 9},
            };
            int r=sizeof(m)/sizeof(m[0]);
            // cout<<r<<endl;
            int c=sizeof(m[0])/sizeof(m[0][0]);
            // cout<<c<<endl;
    findelem(m,r,c);
	return 0;
}