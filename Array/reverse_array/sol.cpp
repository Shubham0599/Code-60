string reverseWord(string str){
    
  //Your code here
  int n=str.size();
  int s=0; int e=n-1;
  while(s<e){
      int t=str[s];
      str[s]=str[e];
      str[e]=t;
      s++;
      e--;
  }
  return str;
  
}