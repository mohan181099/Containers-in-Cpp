//size()    --> size of the array 
//front()   --> front element of the array 
//back()    --> back element of the array 
//at()      --> element at that point
//empty()   --> check wether the array is empty or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int,10> A;

    cout<<A.size()<<endl;

    cout<<A.empty()<<endl;

    A = {1,2,3,4,5,6,7,8,9,10};

    cout<<A.front()<<endl;
    cout<<A.back()<<endl;
    for(int i = 0; i<A.size(); i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i<A.size(); i++){
        cout<<A.at(i)<<" ";
    }
    
}
/*
10
0
1
10
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10 
*/