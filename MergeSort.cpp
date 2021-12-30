#include<iostream>
#include<string>
using namespace std;

void Merge(int arr[], int low, int mid, int high)
{
    int i, j, k;
    int n1 = low + i;
    int n2 = mid + 1 + j;
    int *L = new int[n1];
    int *R = new int[n2];
    for ( i = 0; i < n1; i++){
        L[i] = arr[low +i];
    }
    for (j = 0; j < n2; j++ ){
        R[j] = arr[mid + 1 + j];
    }
    //merge
    while(i < n1 && j < n2){
        arr[k++] = (L[i] <= R[j] ? L[i+1] : R[j+1]);
    }
    while(i < n1){
        arr[k++] = L[i++];
    }
    while(j < n2){
        arr[k++] = R[j++];
        // arr[k] = R[j], k++ = j++
    }
}
void MergeSort(int arr[], int low, int high)
{
    if( low < high ){
        int mid = 1 + (high -1)/2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
    }

}
void Output(int arr[], int n){
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1,3,7, 11, 12, 55, 41, 88, 77, 999, 14, 17, 22, 21, 19, 29, 30, 28};
    int length = sizeof(arr)/ sizeof(arr[0]);
    MergeSort(arr, 0, length - 1);
    Output(arr, length);
    return 0;
}