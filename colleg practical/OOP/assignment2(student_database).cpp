#include<iostream>
#include<string>
using namespace std;
class student_rollno
{
    int roll;
    public:
    void get_roll()
    {
        cout<<"Enter the roll.no :";
        cin>>roll;
    }
    void display_roll()
    {
        cout<<"Roll.no :"<<roll<<endl;
    }
    friend class student_data;
};
class student_data
{
    string name, clas, div, dob, bg, add, tel, drive, ot, mob;
    static int id;
    
    public:
    student_data();
    void display();
    student_data(student_data &s);
    static void show_id()
    {
        id++;
        cout<<id<<endl;
    }
    
};
student_data::student_data()
{
student_rollno obj;
    cout<<"Enter the name :";
    cin>>name;
    obj.get_roll();
    cout<<"Enter the class :";
    cin>>clas;
    cout<<"Enter the division :";
    cin>>div;
    cout<<"Enter the date of birth :";
    cin>>dob;
    cout<<"Enter the blood group :";
    cin>>bg;
    cout<<"Enter the mobile number :";
    cin>>mob;
    cout<<"Enter the address :";
    cin>>add;
    cout<<"Enter the telephone number :";
    cin>>tel;
    cout<<"Enter the driving lisence number :";
    cin>>drive;
    cout<<"Other :";
    cin>>ot;
}
void student_data::display()
{
    student_rollno obj;
    cout<<"Name :"<<name<<endl;
    obj.display_roll();
    cout<<"Class :"<<clas<<endl;
    cout<<"Division :"<<div<<endl;
    cout<<"Date of Birth :"<<dob<<endl;
    cout<<"Blood Group :"<<bg<<endl;
    cout<<"Mobile number :"<<mob<<endl;
    cout<<"Address :"<<add<<endl;
    cout<<"Telephone number :"<<tel<<endl;
    cout<<"Driving lisence number :"<<drive<<endl;
    cout<<"Other :"<<ot<<endl;
}
student_data::student_data(student_data &s)
{
    this->name=s.name;
    this->clas=s.clas;
    this->div=s.div;
    this->dob=s.dob;
    this->bg=s.bg;
    this->mob=s.mob;
    this->add=s.add;
    this->tel=s.tel;
    this->drive=s.drive;
    this->ot=s.ot;
}
int  student_data::id;
int main()
{
    int n;
    cout<<"Enter the data."<<endl;
    cout<<"Enter the no of student :";
    cin>>n;
    student_data t1;
    student_data t2(t1);
  student_data *t= new student_data[n];
  for(int i=0;i<n;i++)
  {
    student_data::show_id();
    t[i].display();
  }
    t2.display();
 delete t;
}
