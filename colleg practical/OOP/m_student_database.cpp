#include<iostream>
#include<string>
using namespace std;
class students;
class personal_info
{
    int roll;
    public:
    friend class student;
};
class student 
{
    string name,clas,drive,divi,bg,ot,add,dob,mob,tele;
    static int id;
    public :
    student();
    void display();
    student(student &x)
    {
        this->name=x.name;
        this->clas=x.clas;
        this->divi=x.divi;
        this->dob=x.dob;
        this->bg=x.bg;
        this->mob=x.mob;
        this->add=x.add;
        this->tele=x.tele;
        this->drive=x.drive;
        this->ot=x.ot;
    }
    static void showid()
    {
        id++;
        cout<<"count"<<id<<endl;
    }
};
student :: student ()
{
    personal_info p;
    name="Rushank Ambekar";
    p.roll=56;
    cout<<"Enter the class of the student : ";
    cin>>clas;
    cout<<"Enter the division of the student : ";
    cin>>divi;
    dob="25/01/2033";
    bg="A +ve";
    cout<<"Enter the mobile number of the student : ";
    cin>>mob;
    cout<<"Enter the address of the student : ";
    cin>>add;
    cout<<"Enter the telephone number of the student : ";
    cin>>tele;
    cout<<"Enter the driving lisence number of the student : ";
    cin>>drive;
    cout<<"Enter any other  : ";
    cin>>ot;
}
void student :: display ()
{
    personal_info p;
    cout<<name<<endl;
    cout<<p.roll<<endl;
    cout<<clas<<endl;
    cout<<divi<<endl;
    cout<<dob<<endl;
    cout<<bg<<endl;
    cout<<mob<<endl;
    cout<<add<<endl;
    cout<<tele<<endl;
    cout<<drive<<endl;
    cout<<ot<<endl; 
}
int student::id;
int main ()
{
    student s1, s2(s1);
    s1.display();
    student :: showid();
    s2.display();
    student :: showid();
    return 0 ;
}