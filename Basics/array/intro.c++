#include<bits/stdc++.h>
int call_fun(int a[]){
    int *b = a;
    std::cout<<" "<<b[2];
    return 0;
}
int main(){
    int a[5] = {1,2,3,4,5};
    std::cout<<a[0]<<" "<<a[4];

    //passing array as an argument
    call_fun(a);
}