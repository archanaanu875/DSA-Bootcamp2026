#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int visited[256]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // freq[arr[i]]++;
    }
    
    
    cout<<"Remove the duplicate elements";
    for(int i=0;i<n;i++){
        if(visited[arr[i]]==0){
            cout<<arr[i]<<" ";
            visited[arr[i]]=1;
        }
    }
    return 0;
}


