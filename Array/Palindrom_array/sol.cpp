int PalinArray(int a[], int n)
{  //add code here.
bool result=true;
int p,r=0;

for(int i=0;i<n;i++){
    p=a[i];
    int mirr=0;
    while(p>0){
        r=p%10;
        mirr=mirr*10+r;
        p=p/10;
    }
    if(mirr!=a[i]){
        result=false;
        break;
    }
}
return result;

}