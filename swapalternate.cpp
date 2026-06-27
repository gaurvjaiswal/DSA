#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i =0; i<=n; i++){
        cout<< arr[i] << " ";

    }cout<< endl;
}


void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 <size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){

    int even[8] = {3,4,6,7,8,9,10,11};
    int odd[7] =  {5,6,7,8,9,1,2};

    swapAlternate(even, 7);
    printArray(even,7);

    cout << endl;

    swapAlternate(odd, 6);
    printArray(odd,6);

}