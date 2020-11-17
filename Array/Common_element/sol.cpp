//finding problem in case of
// 1
// 3 3 3
// 4 4 4
// 4 4 4
// 4 4 4
//expected/correct output 4
//output shown 4 4 4
//so used hashmap to resolve it....using array gives segmentaion fault not sure why


#include <bits/stdc++.h>
using namespace std;



class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector <int> v;
            vector <int> res;
            map<int,int> mp;
            map<int, int>::iterator itr;
            int max=0;
            int i=0,j=0,k=0;
            while(i<n1&&j<n2&&k<n3){
                if(A[i]==B[j]&&B[j]==C[k])
                {   mp[A[i]]++;
                    v.push_back(A[i]);
                i++;j++;k++;
                }
                else if(A[i]<B[j])i++;
                else if(B[j]<C[k])j++;
                else k++;
            }
           
       for( itr=mp.begin();itr!=mp.end();itr++)
       res.push_back(itr->first);
            
           return res; 
        }



int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
} 