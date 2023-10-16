// Input and Output of 2D array

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     //body here
//     int n,m;
//     cin>>n>>m;
//     int a[n][m];
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Searching an element in a matrix

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     //body here
//     int n,m;
//     cin>>n>>m;
//     int a[n][m];
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     int x;
//     cin>>x;
//     bool flag = false;
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//         if (a[i][j]==x){
//             cout<<i<<" "<<j<<endl;
//             flag = true;
//         }
//         }
//     }
//     if (flag){
//         cout<<"Element Is Found"<<endl;
//     }
//     else {
//         cout<<"Element Is Not Found"<<endl;
//     }
//     return 0;
// }


// Spiral Order Matrix Traversal

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     //body here
//     int n,m;
//     cin>>n>>m;
//     int a[n][m];
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     int row_start=0,row_end=n-1,col_start=0,col_end=m-1;
//     while (row_start<=row_end && col_start<=col_end){
//         for (int col=col_start;col<=col_end;col++){
//             cout<<a[row_start][col]<<" ";
            
//         }
//         row_start++;
//         for (int row=row_start;row<=row_end;row++){
//             cout<<a[row][col_end]<<" ";
            
//         }
//         col_end--;
//         for (int col=col_end;col>=col_start;col--){
//         cout<<a[row_end][col]<<" ";
        
//         }
//         row_end--;
//         for (int row=row_end;row>=row_start;row--){
//         cout<<a[row][col_start]<<" ";
        
//         }
//         col_start++;
//     }    
//     return 0;
// }


// Transpose of a Matrix

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     //body here
//     int n,m;
//     cin>>n>>m;
//     int a[n][m];
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     for (int i=0;i<n;i++){
//         for (int j=i;j<m;j++){
//             int temp = a[i][j];
//             a[i][j]=a[j][i];
//             a[j][i]=temp;
//         }
//     }
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Matrix Multiplication



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     //body here
//     int n,t;
//     cin>>t;
//     while (t--){
//         cin>>n;
//         int a[n];
//         for (int i=0;i<n;i++){
//             cin>>a[i];
//         }
//        int count;
//        int b[n];
//        for (int i=0;i<n;i++){
//         count=1;
//         if (a[i]==a[i+1]){
//             count++;
//         }
//         b[i]=count;
//        } 
//        int mx=INT_MIN;
//        for (int i=0;i<n;i++){
//         mx = max (mx,b[i]);
//        }
//        cout<<n-(n*mx)<<endl;
//     }
//     return 0;
// }


// Union

#include <iostream>
using namespace std;
int main() {
    int n,m,i,j;
    cin>>n>>m;
    int a[n],b[m];
    for (i=0;i<n;i++){
        cin>>a[i];
    }
    for (j=0;j<m;j++){
        cin>>b[j];
    }
    int un[n+m];
    if (n>=m){
        for (i=0;i<n;i++){
            un=a[i];
        }
        for (i=0;i<n;i++){
            for (j=0;j<m;j++){
                if (a[i]!=b[j]){
                    un=b[j];
                }
            }
        }
    }
    else{
        for (j=0;j<m;j++){
            un=b[j];
        }
        for (j=0;j<n;j++){
            for (i=0;i<m;i++){
                if (a[i]!=b[j]){
                    un=a[i];
                }
            }
        }
    }
    for (i=0;i<n+m;i++){
        cout<<un[i]<<endl;
    }
    return 0;
}