#include <iostream>
#include <algorithm>

using namespace std;

int pos=0,temp1=0,temp2=0;

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    while (i<j)
    {
        while(arr[i]<=pivot && i<=high){
            i++;
        }
        while(arr[j]>=pivot && j>=low){
            j--;
        }
        if(i<j){
            temp1 = arr[i];
            arr[i] = arr[j];
            arr[j] = temp1;
        }
        if(i>j)
        {
            temp2 = pivot;
            pivot = arr[j];
            arr[j] = temp2;
        }

    }

    return j;
    

}

void Quicksort(int arr[],int low,int high){
    if (low<high)
    {
        pos = partition(arr,low,high);
        Quicksort(arr,low,pos-1);
        Quicksort(arr,pos+1 , high);
    }
    
    

}



int main(){

    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    Quicksort(arr,0,size-1);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    



    return 0;
}

// #include <iostream>
// #include <algorithm>
// using namespace std;

// void swap(int* a, int* b) 
// { 
//     int t = *a; 
//     *a = *b; 
//     *b = t; 
// } 

// int partition(int arr[], int low, int high)
// {
// 	int i = low;
// 	int j = high;
// 	int pivot = arr[low];
// 	while (i < j)
// 	{
// 		while (pivot >= arr[i])
// 			i++;
// 		while (pivot < arr[j])
// 			j--;
// 		if (i < j)
// 			swap(arr[i], arr[j]);
// 	}
// 	swap(arr[low], arr[j]);
// 	return j;
// }

// void quickSort(int arr[], int low, int high)
// {
// 	if (low < high)
// 	{
// 		int pivot = partition(arr, low, high);
// 		quickSort(arr, low, pivot - 1);
// 		quickSort(arr, pivot + 1, high);
// 	}
// }

// void printArray(int arr[], int size)
// {
// 	for (int i = 0; i < size; i++)
// 	{
// 		cout << arr[i] << " ";
// 	}
// 	cout << endl;
// }

// int main()
// {
//     int size ;
//     cin>>size;
// 	int arr[size] ;
//     for (int i = 0; i < size; i++)
//     {
//         cin>>arr[i];
//     }
    


// 	quickSort(arr, 0, size - 1);
// 	printArray(arr, size);
// 	return 0;
// }
