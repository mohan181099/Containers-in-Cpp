// begin(), end() and iterators  --> Pointers
// rbegin(), rend()      --> Pointers (for reversing)
// array.begin()  --> points begining address
// array.end()   --> points nth address 
// iterator      --> usage : eg- auto it
#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int,10> A = {1,2,3,4,5,6,7,8,9,10};

    cout<<*(A.begin())<<endl;
    cout<<*(A.end()-1)<<endl;

    for(auto it = A.begin(); it != A.end(); it++){
        cout<<*it<<" ";
    }

    cout<<endl;

    for(auto it:A){ // only for forward traversel
        cout<<it<<" ";
    }

    cout<<endl;

    for(auto it = A.rbegin(); it != A.rend(); it++){
        cout<<*it<<" ";
    }

}

/*
OUTPUT:
1
10
1 2 3 4 5 6 7 8 9 10 
1 2 3 4 5 6 7 8 9 10
10 9 8 7 6 5 4 3 2 1
*/