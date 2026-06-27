#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    int mid = start + (end - start)/2;

    while(start <=end ){
        if(arr[mid] == key){
            return mid;
        }
      else if (key > arr[mid]){
        start = mid + 1;
      }
      else{
        end = mid - 1;

      }
      mid = start +(end - start) / 2;
    }
    return -1;
}

int main(){

    int even[6] = {4,7,8,9,10,11};
    int odd[5] = {4,7,8,9,10};

    int evenIndex = BinarySearch(even, 6 , 11);
    cout<< "Index of 11 is " << evenIndex << endl;

    int oddIndex = BinarySearch(odd, 5 , 9);
    cout<< "Index of 9 is " << oddIndex << endl;

     return 0;

}