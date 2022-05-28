//link : https://codeforces.com/group/LKPSX7Pt2W/contest/322212/problem/I
//author : @Mohamed Ibrahim

#include<iostream>
using namespace std;
int main(){
int n;
```diff
  cout<<"Enter nth position to determine it's value";
```
cin>>n;
long long arr[n];
  ```diff
-arr[0]=0;
+arr[0] = 1;
``` 
arr[1]=1;
  ```diff
-for(int i=2;i<n;i++){
+for(int i = 1;i < n;++i) {
  ```
arr[i]=arr[i-1]+arr[i-2];
}
cout<<arr[n-1];
}
