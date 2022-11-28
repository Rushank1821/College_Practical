#include<iostream>
using namespace std;
void creat (int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<"Enter the element : ";
        cin>>arr[i];
    }
}
void creatref (int arr1[], int arr2[], int n)
{
    for (int i=0; i<n; i++)
    {
        arr1[i]=arr2[i];
    }
}
void wt (int arr1[], int arr2[], int n, int t)
{
    for (int i=0; i<n; i++)
    {
        arr1[i]=t;
        t+=arr2[i];
    }
}
void tat (int arrt[], int arr1[], int arr2[], int n)
{
    for (int i=0; i<n; i++)
    {
        arrt[i]=arr1[i]+arr2[i];
    }
}
void display (int arr1[], int arr2[], int arr3[], int arr4[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<arr1[i]<<" "<<arr2[i]<<" "<<arr3[i]<<" "<<arr4[i]<<endl;
    }
    
}
void averag(int arr[], int n)
{
    int avg, total=0, count=0;
    for (int i=0; i<n; i++)
    {
        total=arr[i];
        count+=1;
    }
    avg=total/count;
    cout<<"The average burst time is : "<<avg<<endl;
}




int main()
{
    int n, t=0;
    cout<<"Enter the number of processes you want to enter : ";
    cin>>n;
    int pro[n];
    int burst[n];
    int ref[n];
    int wating[n];
    int turn[n];
    cout<<"Enter the process_id : "<<endl;
    creat(pro, n);
    cout<<"Enter the burst time : "<<endl;
    creat(burst, n);
    //for creating a copy of burst time.
    creatref(ref, burst, n);
    wt (wating, ref, n, t);
    tat (turn, burst, wating, n);
    cout<<"The process, burst, wating and total turnaround time is : "<<endl;
    display (pro, burst, wating, turn, n);
    averag(burst, n);
    averag(turn, n);
    return 0;
}