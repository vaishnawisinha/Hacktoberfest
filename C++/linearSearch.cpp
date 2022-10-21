#include <iostream>
using namespace std;

int main(){
    int n[1000], len, num;

    cout<<"Enter length of array: "<<endl;
    cin>> len;

    for(int i=0; i<len; i++){
        cin>>n[i];
    }

    cout<<"Enter a number to be searched: ";
    cin>> num;

    for(int i=0; i<len; i++){
        if(n[i] == num){
            cout<<"Number is present at index position "<< i << endl;
        }
    }
}