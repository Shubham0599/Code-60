//one go approach as (kth and smallest)  max heap 
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  priority_queue <int> maxh;
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
           if(maxh.size()==k&&maxh.top()<=mat[i][j]){
              break;
          }
          maxh.push(mat[i][j]);
          if(maxh.size()>k){
              maxh.pop();
          }
      }
  }
  return maxh.top();
}