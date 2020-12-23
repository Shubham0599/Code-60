#include<vector>
#include<algorithm>
vector <int> ight(vector <int> arr,int n){
    vector <int> r;
    stack <pair<int ,int >> s;
    int pseudo=n;
    for(int i=n-1;i>=0;i--){
        if(s.size()==0)
        r.push_back(pseudo);
        else if(s.size()>0&&s.top().first<arr[i])
        r.push_back(s.top().second);
        else if(s.size()>0&&s.top().first>=arr[i]){
        while(s.size()>0&&s.top().first>=arr[i]){
            s.pop();
        }
        if(s.size()==0)
        r.push_back(pseudo);
        else
        r.push_back(s.top().second);
        
    }
    s.push({arr[i],i});
}
reverse(r.begin(),r.end());
return r;
}

vector <int> eft(vector <int> arr,int n){
    vector <int> r;
    stack <pair<int ,int>> s;
    int pseudo=-1;
    for(int i=0;i<n;i++){
        if(s.size()==0)
        r.push_back(pseudo);
        else if(s.size()>0&&s.top().first<arr[i])
        r.push_back(s.top().second);
        else if(s.size()>0&&s.top().first>=arr[i]){
        while(s.size()>0&&s.top().first>=arr[i]){
            s.pop();
        }
        if(s.size()==0)
        r.push_back(pseudo);
        else
        r.push_back(s.top().second);
        
    }
    s.push({arr[i],i});
}

return r;
}

int solve(vector <int> arr,int n){
    vector <int>right=ight(arr,n);
    vector <int>left=eft(arr,n);
    vector <int> width;
    for(int  i=0;i<n;i++){
        width.push_back(right[i]-left[i]-1);
    }
    int  area[n];
    for(int i=0;i<n;i++){
        area[i]=arr[i]*width[i];
    }
    sort(area,area+n);
    
    return area[n-1];
}

/*You are required to complete this method*/
int maxArea(int arr[MAX][MAX], int n, int m) {
    // Your code here
    vector <int> v;
    int a[n];
    for(int j=0;j<m;j++){
        v.push_back(arr[0][j]);
    }
     a[0]=solve(v,v.size());
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0)
            v[j]=0;
            else
            v[j]=arr[i][j]+v[j];
           
        }
        
         a[i]=solve(v,v.size());
    }
    sort(a,a+n);
    return a[n-1];
}