#include<iostream>
using namespace std;
// without using classes;
template<class t>
void selection_sort (t arr[],int n)
    {
        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (arr[i]>arr[j])
                {
                    int temp;
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
template<class t>
void display (t arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}
template<class t>
void accept (t arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        int a;
        cout<<"Enter the "<<i+1<<" element :";
        cin>>a;
        arr[i]=a;
    }
}
    int main ()
{
    int choice, n;
    cout<<"Enter the type of array you want to sort."<<endl;
    cout<<"Press 1: Integer array"<<endl<<"Press 2: Float array"<<endl;
    cout<<"Choice :";
    cin>>choice;
    if(choice==1)
    {
        cout<<"Enter the number of elements :";
        cin>>n;
        int * arr = new int [n];
        accept(arr, n);
        display(arr, n);
        selection_sort(arr, n);
        cout<<"After soarting."<<endl;
        display(arr, n);
    }
    else if (choice==2)
    {
        cout<<"Enter the number of elements :";
        cin>>n;
        float * arr = new float [n];
        accept(arr, n);
        display(arr, n);
        selection_sort(arr, n);
        cout<<"After soarting."<<endl;
        display(arr, n);
    }
    else
    {
        cout<<"You have entered a wrong choice."<<endl;
    }
    return 0;
}