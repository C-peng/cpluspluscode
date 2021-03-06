#include <iostream>    
#include <algorithm>   
using namespace std;   
  
#define MAX 101    
  
int D[MAX][MAX];     
int n;    
int maxSum[MAX][MAX];   
int main(){      
    int i,j;      
    cin >> n;      
    for(i=1;i<=n;i++)     
        for(j=1;j<=i;j++)          
            cin >> D[i][j];     
    for( int i = 1;i <= n; ++ i )       
        maxSum[n][i] = D[n][i];     
    for( int i = n-1; i>= 1;  --i )       
        for( int j = 1; j <= i; ++j )           
            maxSum[i][j] = max(maxSum[i+1][j],maxSum[i+1][j+1]) + D[i][j];      
    cout << maxSum[1][1] << endl;    
}   
