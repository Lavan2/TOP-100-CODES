#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    if(num > 0){
        cout<<"It is a positive Number: "<<num;
    }
    else if(num < 0){
        cout<<"It is a Negative Number: "<<num;
    }
    else{
        cout<<"Zero";
    }
    return 0;
}

//output:
//-1
//It is a negative Number: -1
//100
//It is a postive Number: 100
//a
//Zero
