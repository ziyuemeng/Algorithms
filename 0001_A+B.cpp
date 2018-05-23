//A+B > C?
#include<iostream>
using namespace std;
int main (){
    int count;
    cin>>count;
    int i = 0;
    int A[count],B[count],C[count];
    while(  i < count){
        cin>>A[i]>>B[i]>>C[i];
        i++;
    }
    for(int i = 0;i < count;++i){
        if(A[i] + B[i] <= C[i])
            cout<<"Case #"<<i+1<<"false"<<endl;
        else
            cout<<"Case #"<<i+1<<"true"<<endl;
    }
    return 0;
}
