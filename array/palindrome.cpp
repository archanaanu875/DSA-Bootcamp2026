#include<iostream>
using namespace std;
int main(){
    int num;
    int sum=0,original,rem;
    cin>>num;
    original=num;
    while(num>0){
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    if(original==sum){
        cout<<"Palindrome";
    }
    else{ 
        cout<<"Not";
    }

    return 0;

}
