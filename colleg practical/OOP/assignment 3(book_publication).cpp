#include<iostream>
#include<string>
using namespace std;
class publication 
{
    protected:
        int price;
        string name;
    public:
        void getdata ()
        {
            cout<<"Enter the name of the book : ";
            cin>>name;
            cout<<"Enter the price of the book : ";
            cin>>price;
        }
        void bdisplay ()
        {
            cout<<"The book "<<name<<" costs : "<<price<<" rs"<<endl;
        }

};
class book : public publication
{
    protected:
        int page;
    public :
        void getpage_count ()
        {
            cout<<"Enter the page count of the book : ";
            cin>>page;
        }
        void book_display ()
        {
            cout<<"The page count of the book is : "<<page<<" pages"<<endl;
        }
};
class tape : public publication
{
    protected:
        float time;
    public :
        void tape_time ()
        {
            cout<<"Enter the play time of the book : ";
            cin>>time;
        }
        void tape_display ()
        {
            cout<<"The play time of the book is : "<<time<<" Hrs"<<endl;
        }
};
int main ()
{
    book b;
    tape t;
    cout<<"Enter the data for book"<<endl;
    b.getdata();
    b.getpage_count();
    t.tape_time();
    cout<<"The entered data is : "<<endl;
    b.bdisplay();
    b.book_display();
    t.tape_display();
    return 0;
}