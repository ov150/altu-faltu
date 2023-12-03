#include<iostream>
using namespace std;

int binary(int arr[], int n, int key){
        int high,low,mid;
        low=0;
        high = n;
        while(low<=high){
            mid = (low+high)/2;
            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]<key){
                low = mid+1;
            }    
            else{
                high = mid-1;
            }

        }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<binary(arr, n, key)<<endl;

}
