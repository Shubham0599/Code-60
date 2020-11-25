int findLongestConseqSubseq(int arr[], int N)
{
  //Your code here
  int size_max=0;
  for(int i=0;i<N;i++){
      size_max=max(size_max,arr[i]);
  }
  int num[size_max +1]={0}; 
  for(int i=0;i<N;i++){
      num[arr[i]]=1;
  }
  int result=0;
  int count=-1;
  for(int i=0;i<(size_max+1);i++){
      if(num[i]==1)count++;
      else count=0;
      result=max(count,result);
  }
  
  return result;
  
}