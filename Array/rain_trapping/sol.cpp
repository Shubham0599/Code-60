//right vector should be reversed ,in using reverse use bits/stdc++.h


#include <iostream>
#include <vector>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

vector <int> left(int a[],int n){
    vector <int> v;
    stack <int> s;
    for(int i=0;i<n;i++){
        if(s.empty()){
            v.push_back(a[i]);
            s.push(a[i]);
        }
        else if(s.top()>a[i])v.push_back(s.top());
        else{
            s.push(a[i]);
            v.push_back(a[i]);
        }
    }
    return v;
    
}


vector <int> right(int a[],int n){
    vector <int> v;
    stack <int> s;
    for(int i=n-1;i>=0;i--){
        if(s.empty()){
            v.push_back(a[i]);
            s.push(a[i]);
        }
        else if(s.top()>a[i])v.push_back(s.top());
        else{
            s.push(a[i]);
            v.push_back(a[i]);
        }
    }
     reverse(v.begin() ,v.end());
    return v;
    
}


int solve(int a[],int n){
    vector <int> l=left(a,n);
    vector <int> r=right(a,n);
    int p;
    int sum=0;
    for(int i=1;i<n-1;i++){
         p=min(l[i],r[i]);
         sum+=(p-a[i]);
    }
    return sum;
}

int main() {
	//code
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)cin>>a[i];
	    cout<<solve(a,n)<<endl;
	}
	return 0;
}