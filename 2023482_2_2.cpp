#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int nth = 0;
    for (int i=0;i<n;i++){
        cout<< nth <<",";
    nth = 2*nth + 2;
    }
    return 0;
}

