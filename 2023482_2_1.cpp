#include<iostream>
using namespace std;
int main() {
    int tableNum,start,end;
    cout<<"Enter the table you want: ";
    cin>>tableNum;
    cout<<"Enter the start of your table: ";
    cin>>start;
    cout<<"Enter the end of your table: ";
    cin>>end;

    for (int i=start;i<=end;i++) {
    cout<<tableNum<<"X"<<i<<"="<< tableNum * i <<endl;
    }
    
    
    return 0;
}

