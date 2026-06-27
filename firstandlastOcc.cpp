#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){

    int start = 0;
    int end = n - 1;
    int ans = -1;

    while(start <= end){

        int mid = start + (end - start) / 2;

        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        mid = start + (end - start)/ 2;
    }

    return ans;
}

int lastOcc(int arr[], int n, int key){

    int start = 0;
    int end = n - 1;
    int ans = -1;

    while(start <= end){

        int mid = start + (end - start) / 2;

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return ans;
}
int totalOcc(int arr[], int n, int key){

    int first = firstOcc(arr, n, key);
    int last = lastOcc(arr, n, key);

    if(first == -1){
        return 0;
    }

    return last - first + 1;
}

int main(){

    int even[8] = {2,3,4,4,4,4,4,5};

    cout << "First Occurrence of 4 is at index " << firstOcc(even, 8, 4) << endl;
    cout << "Last Occurrence of 4 is at index " << lastOcc(even, 8, 4) << endl;
    cout << "Total Occurrence of 4 is " << totalOcc(even, 8, 4) << endl;

    return 0;
}