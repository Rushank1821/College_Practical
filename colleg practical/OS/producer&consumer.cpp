/*implement producer consumer problem using semaphore and mutex*/
#include <iostream>
using namespace std;
void producer (int &n, int &item_count)
{
    if (item_count<n)
    {
        int choice;
        cout<<"You want to add an item."<<endl
            <<"Press 1: If yes."<<endl
            <<"Press 2: If no."<<endl;
        cin>>choice;
        switch (choice)
        {
            case 1:
                item_count++;
                break;
            case 2:
                break;
            default :
                break;
        }
    }
    else
    {
        cout<<"The item limit is reached, so you cannot add another item."<<endl;
    }
    cout<<"The item count is :"<<item_count<<endl;
}
void consumer(int &n, int &item_count)
{
    if (item_count<=n&&item_count>0)
    {
        int choice;
        cout<<"You want to buy an item."<<endl
            <<"Press 1: If yes."<<endl
            <<"Press 2: If no."<<endl;
        cin>>choice;
        switch (choice)
        {
            item_count--;
        }
    }
    cout<<"The item count is :"<<item_count<<endl;
}
int main ()
{
    int start_choice;
    int producer_count=0;
    int item_count=0;       //item_count is storing the number of                         items in present in the stack.
    int number_items;       //number_item is storing the maximum                          number of items the producer want to store.
    while(true)
    {
        cout<<"Press 1: If you are producer."<<endl
            <<"Press 2: If yor are consumer."<<endl;
        cout<<"Enter your choice :";
        cin>>start_choice;
        switch (start_choice)
        {
            case 1:
                if (producer_count==0)
                {
                    cout<<"Enter the number of items producer wants to produce :";
                    cin>>number_items;
                    producer_count++;
                    producer (number_items, item_count);
                }
                else
                {
                    producer (number_items, item_count);
                }
                break ;
            case 2:
                consumer (number_items, item_count);
                break;
            default:
                break;
        }
    }
    return 0;
}   