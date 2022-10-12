#include <bits/stdc++.h>  
using namespace std;
// maximum_sum returns the maximum sum of increasing subsequence  
int max_sum(vector<int>a ,int n)  
{  
    int i, j;  
    int maximum_sum[n];  
    int maxi=0;  
    // Initializing the maximum_sum[] values for all the indexes   
    for (int i=0; i<n ; i++)  
    {  
        maximum_sum[i] = a[i];  
    }      
    // Computing the values for all the indexes of maximum_sum[]  
    for(int i=0; i<n; i++)  
    {  
        for(int j=0; j<i; j++)  
        {  
            if((a[i]>a[j]) && (maximum_sum[i]< (maximum_sum[j]+a[i]) ))  
            {  
                maximum_sum[i] = maximum_sum[j] + a[i];  
            }  
        }  
    }  
 // Calculating the maximum element from the maximum_sum[] array  
    for(int i = 0; i<n; i++)  
        maxi =max(maxi, maximum_sum[i]);  
      
     return maxi;  
}  
// main() method  
int main()  
{  
  vector<int> v; //array initialization  
  int n ,a;
  cin>>n;
  for(int i=0;i<n;i++){
      cin>>a;
      v.push_back(a);
  }
  
  cout<<"Max sum of increasing subsequence is :"<<max_sum(v,n);  
  return 0;  
}  
