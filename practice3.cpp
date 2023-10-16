// prime number

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     //body here
//     int n,i;
//     bool flag;
//     cin>>n;
//     for (i=2;i<sqrt(n);i++)
//     {
//         if (n%i==0)
//         {
//             cout<<"non prime"<<endl;
//             flag=1;
//             break;
//         }
//     }
//             if (flag==0)
//         {
//             cout<<"prime"<<endl;
//         }
//     return 0;
// }


// reverse a number

// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,reverse=0,ld;
//     cin>>n;
//     while(n>0)
//     {
//         ld=n%10;
//         reverse=reverse*10+ld;
//         n=n/10;
//     }
//     cout<<reverse<<endl;
//     return 0;
// }


//Armstrong number

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     //body here
//     int n,sum=0,ld;
//     cin>>n;
//     int originaln=n;
//     while (n>0){
//         ld=n%10;
//         sum+=pow(ld,3);
//         n=n/10;
//     }
//     if (sum==originaln){
//         cout<<"Armstrong number"<<endl;
//     }
//     else{
//         cout<<"Not Armstrong number"<<endl;
//     }
//     return 0;
// }



                                               // Functions


//Prime no.

// #include <iostream>
// #include <cmath>
// using namespace std;
// bool isprime(int num){
//     for(int i=2;i<=sqrt(num);i++){
//         if(num%i==0){
//             return false;
//         }
//     }
//     return true;
//     }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     for(int i=a;i<=b;i++){
//         if(isprime(i)){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

//Fibonacci series

// #include<iostream>
// using namespace std;

// void fib(int n){
//     int t1=0,t2=1,nextterm;
//     for(int i=1;i<=n;i++){
//         cout<<t1<<endl;
//         nextterm=t1+t2;
//         t1=t2;
//         t2=nextterm;
//     }
//     return;
// }
    
// int main(){
//     int n;
//     cin>>n;
//     fib(n);
//     return 0;
// }


//Factorial

// #include<iostream>
// using namespace std;

// int fact(int n){
//     int factorial=1;
//     for (int i=2;i<=n;i++){
//         factorial*=i;
//     }
//     return factorial;
// }
// int main()
// {
//     //body here
//     int n;
//     cin>>n;
//     int ans = fact(n);
//     cout<<ans<<endl;
//     return 0;
// }


//nCr

// #include<iostream>
// using namespace std;

// int fact(int n){
//     int factorial=1;
//     for (int i=2;i<=n;i++){
//         factorial*=i;
//     }
//     return factorial;
// }
// int main()
// {
//     //body here
//     int n,r;
//     cin>>n>>r;
//     int ans = fact(n)/(fact(n-r)*fact(r));
//     cout<<ans<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int fact(int n){
//     int factorial=1;
//     for (int i=2;i<=n;i++){
//         factorial*=i;
//     }
//     return factorial;
// }
// int main()
// {
//     //body here
//     int n;
//     cin>>n;
//     for (int i=0;i<n;i++){
//         for (int j=0;j<=i;j++){
//             int ans = fact(i)/(fact(j)*fact(i-j));
//             cout<<ans<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

                               //Arrays

// Array Input

// #include <iostream>
// using namespace std;
// int main(){
//     int n,arr[n];
//     cin>>n;
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Print max and min


// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     //body here
//     int n,arr[n],maxNo=INT_MIN,minNo=INT_MAX;
//     cin>>n;
//     for (int i=0;i<n;i++){
//         cin>>arr[i];

//         maxNo = max(maxNo,arr[i]);
//         minNo = min(minNo,arr[i]);
//     }
//     cout<<maxNo<<" "<<minNo<<endl;
//     return 0;
// }

// Print sum of array

// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,arr[n],sum=0;
//     cin>>n;
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//         sum+=arr[i];
//     }
//     cout<<sum<<endl;
//     return 0;
// }


// Linear Search

// #include <iostream>
// using namespace std;

// int LinearSearch(int n,int arr[],int key){
//     for (int i=0;i<n;i++){
//         if (key==arr[i]){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n,arr[n],key;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cin>>key;
//     cout<<LinearSearch(n,arr,key)<<endl;
// }


// Binary Search

// #include<iostream>
// using namespace std;

// int BinarySearch(int n,int arr[],int key){
//     int s=0,e=n;
//     while (s<=e){
//         int mid = (s+e)/2;
//         if (arr[mid]==key){
//             return mid;
//         }
//         else if (arr[mid]>key){
//             e = mid-1;
//         }
//         else if (arr[mid]<key){
//             s = mid+1;
//         }
//     }
//     return -1;

// }
// int main()
// {
//     //body here
//     int n,arr[n],key;
//     cin>>n;
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cin>>key;
//     cout<<BinarySearch(n,arr,key)<<endl;
//     return 0;
// }


// Selection Sort

// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,temp;
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for (int i=0;i<n-1;i++){
//         for (int j=i+1;j<n;j++){
//             if (arr[j]<arr[i]){
//                 temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

// }


// Bubble Sort

// #include <iostream>
// using namespace std;
// int main(){
//     int n,counter=1;
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     while (counter<n){
//         for (int i=0;i<n-counter;i++){
//             if (arr[i]>arr[i+1]){
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//         }
//         counter++;
//     }
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// insertion Sort

// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for (int i=1;i<n;i++){
//         int current=arr[i];
//         int j=i-1;
//         while (arr[j]>current && j>=0){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=current;
//     }
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// maximum till i

// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n,mx=INT_MIN;
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         mx = max(mx , arr[i]);
//         cout<<mx<<" ";
//     }
//     cout<<endl;

//     return 0;
// }

 
// Sum of Sub arrays

// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int curr=0;
//     for (int i=0;i<n;i++)
//     {
//         curr=0;
//         for (int j=i;j<n;j++)
//         {
//             curr+=a[j];
//             cout<<curr<<" ";
//         }
//     }
//     cout<<endl;
//     return 0;
// }


// Longest Arithematic Subarray

// #include <iostream>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for (int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	int ans = 2;
// 	int d = a[1]-a[0];
// 	int i=2;
// 	int curr=2;
	
// 	while (i<n){
// 		if (a[i]-a[i-1] == d){
// 			curr++;
// 		}
// 		else {
// 			d=a[i]-a[i-1];
// 			curr=2;
// 		}
// 		ans = max (ans,curr);
// 		i++;
// 	}
// 	cout<<ans<<endl;
// return 0; 
// }


// Record Break

// #include<iostream>
// using namespace std;
// int main()
// {
// 	//body here
// 	int n;
// 	cin>>n;
// 	int a[n+1];
// 	a[n]=-1;
// 	for (int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	int ans=0;
// 	int mx = -1;
// 	if (n==1){
// 		cout<<"1"<<endl;
// 		return 0;
// 	}
// 	for (int i=0;i<n;i++){
// 		if (a[i]>mx && a[i]>a[i+1]){
// 			ans++;
// 			mx = max (mx,a[i]);
// 		}
// 	}
// 	cout<<ans<<endl;
// 	return 0;
// }


// Maximum number of sub arrays

// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for (int i=0;i<n;i++){
//         for (int j=i;j<n;j++){
//             for (int k=i;k<=j;k++){
//                 cout<<a[k]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }


// Maximum sub array sum (Brute Force Approach)

// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n;
//     int maxSum=INT_MIN;
//     cin>>n;
//     int a[n];
//     for (int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for (int i=0;i<n;i++){
//         for (int j=i;j<n;j++){
//             int sum=0;
//             for (int k=i;k<=j;k++){
//                 sum+=a[k];
//             }
//             maxSum = max(sum,maxSum);
//         }
//     }
//     cout<<maxSum<<endl;
//     return 0;
// }


// Maximum sub array sum (Cumulative Sum Approach)

// #include<iostream>
// using namespace std;
// int main()
// {
//     //body here
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int currSum[n+1];
//     currSum[0]=0;
//     for (int i=1;i<=n;i++){
//         currSum[i]=currSum[i-1]+a[i-1];
//     }
//     int maxSum=INT_MIN;
//     for (int i=1;i<=n;i++){
//         int sum=0;
//         for (int j=0;j<i;j++){
//             sum = currSum[i] - currSum[j];
//             maxSum = max (maxSum,sum);
//         }
//     }
//     cout<<maxSum<<endl;
//     return 0;
// }


// Maximum sub array sum (Kadane's algorithm)

#include<iostream>
using namespace std;
int main()
{
    //body here
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int currSum=0,maxSum=INT_MIN;
    for (int i=0;i<n;i++){
        currSum+=a[i];
        if (currSum<0){
            currSum=0;
        }
        maxSum=max (maxSum,currSum);
    }
    cout<<maxSum<<endl;
    return 0;
}


// Maximum Circular Subarray sum

// #include<iostream>
// using namespace std;
// int kadane(int a[],int n){
//     int maxSum=INT_MIN;
//     int currSum=0;
//     for (int i=0;i<n;i++){
//         currSum+=a[i];
//         if (currSum<0){
//             currSum=0;
//         }
//         maxSum = max (maxSum,currSum);
//     }
//     return maxSum;
// }
// int main()
// {
//     //body here
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int wrapsum,nonwrapsum,totalsum=0;
//     nonwrapsum=kadane(a,n);
//     for (int i=0;i<n;i++){
//         totalsum+=a[i];
//         a[i]=-a[i];
//     }
//     wrapsum = totalsum + kadane(a,n);
//     int ans = max (wrapsum,nonwrapsum);
//     cout <<ans<<endl;
//     return 0;
// }

// Pair Sum Problem (Brute Force Approach)

// #include<iostream>
// using namespace std;
// bool pairsum (int a[], int n, int k){
//     for (int i=0;i<n-1;i++){
//         for (int j=i+1;j<n;j++){
//             if (a[i]+a[j]==k){
//                 cout<<i<<" "<<j<<endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main()
// {
//     //body here
//     int n,k;
//     cin>>n;
//     int a[n];
//     for (int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cin>>k;
//     cout<<pairsum(a,n,k)<<endl;
//     return 0;
// }


// Pair Sum Problem (Sorting Method)

// #include<iostream>
// using namespace std;

// bool pairsum(int arr[], int n, int k){
//     int low=0, high=n-1;
//     while (low<high){
//         if (arr[low]+arr[high]==k){
//             cout<<low<<" "<<high<<endl;
//             return true;
//         }
//         else if (arr[low]+arr[high]<k){
//             low++;
//         }
//         else {
//             high++;
//         }
//     }
//     return false;
// }
// int main()
// {
//     //body here
//     int n,temp;
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for (int i=0;i<n-1;i++){
//         for (int j=i+1;j<n;j++){
//             if (arr[j]<arr[i]){
//                 temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
// int k;
// cin>>k;
// cout<<pairsum(arr,n,k)<<endl;
// return 0;
// }
