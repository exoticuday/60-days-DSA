#include <bits/stdc++.h>
using namespace std;

void reversearray(int arr[], int size){
    int N = size;
    for(int i=0; i<N/2 ; i++){
        int temp = arr[i];
        arr[i]= arr[N-i-1];
        arr[N-i-1]= temp;
    }
}

int main(){
    int arr[5]= {1,2,3,4,5};
    reversearray(arr,5);
    for(int j=0; j<5 ; j++){
        cout << arr[j]<< endl;
    }
}

// using making new array


# include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size){
    int arr2[size];
    for (int i=0;i<size ; i++){
        arr2[i]=arr[size-i-1];
        cout << arr2[i]<< " ";
    }
}
int main(){
    int arr[5]={2,5,3,7,9};
    reverse(arr, 5);
}
