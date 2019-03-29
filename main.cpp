//
//  main.cpp
//  Napoleon IT
//
//  Created by Saveliy on 15/03/2019.
//  Copyright © 2019 Saveliy. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

void quickSort(int arr[], int left, int right) {
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];
    
    
    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }
    
    
    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}


void quickSort2(int arr[], int left, int right) {
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];
    
    
    while (i <= j) {
        while (arr[i] > pivot)
            i++;
        while (arr[j] < pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }
    
    
    if (left < j)
        quickSort2(arr, left, j);
    if (i < right)
        quickSort2(arr, i, right);
}


void sort1 (int arr[], int n) {
    int a = 0;
    for (int i=0; i<n; i++)
        for (int j=i; j<n; j++)
            if (arr[j] % 2 == 0)
            {
                int k = arr[i];
                arr[i]=arr[j];
                arr[j]=k;
            }
    for (int i=0; i<n; i++)
    {
        if (arr[i] % 2 == 0)
            a++;
}
     quickSort(arr, 0, a-1);
     quickSort2(arr, a, n);
}



int main () {
    int n;
    cout<<"Enter N = ";
    cin>>n;
    if ((n>=2)&(n<=10000)) {
    int* arr=new int [n];
    for (int i=0;i<n;i++) {
        arr[i]=rand()%100;
        cout<<arr[i]<<" ";
    } cout<<endl;
    sort1 (arr,n);
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
        free(arr);
    }
    else {
        cout<<"Error: 2<=N<=10000";
    }
        cout<<endl;  
}
