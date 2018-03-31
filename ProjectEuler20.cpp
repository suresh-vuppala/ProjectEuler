#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<x<<endl;



int main()
{  
  int a[200]; 
    int n=100,i,j,carry,res_size,x;
     a[0]=1; 
      res_size=1;    
      carry = 0;

       for(i=1;i<=n;i++)
       {
            for(j=0;j<res_size;j++)
            {
               x = a[j]*i+carry; 
               a[j]=x%10; 
               carry = x/10; 
            }
             while(carry) 
             { 
               a[res_size]=carry%10;
               carry = carry/10;
               res_size++; 
             }
             
             /*cout<<i<<":";
             for(int i=0;i<res_size;i++) cout<<a[i];
             	cout<<endl; */
      }
  int sum=0;
             for(i=res_size-1;i>=0;i--) sum+=a[i];
              cout<<sum;
    
    
    return 0;
}

 

