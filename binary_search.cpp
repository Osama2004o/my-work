#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define ll long long 

int main(){
cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
int n=9;
int x=1;
vector<int> nums={1,2,3,4,5,6,7,8,9};
int l=0 ,r=n-1;
while (l <= r){
    int mid =(l+r)/2;
    if(nums[mid] == x){
        cout<<"yes"<<endl;
        return 0;
    }
    else if(nums[mid] < x){
        l = mid + 1;
    }
    else if(nums[mid] > x){
        r = mid - 1;
    }
    
}
cout<<"no";

}