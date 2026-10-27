#include <iostream>
#include <string>
using namespace std;

struct student
{
    int rollNo;
    string name ;
    float percentage;
};

int main ()
{
    student s[100];
    int n;
    cout<<"enter number of students:";
cin>>n;

for(int i=0;i<n;i++)
    {
    cout<<"\nEnter details of students"<<i+1<<endl;

    cout<<"enter roll number:";

cin>> s[i].rollNo;

    cout<<"Enter Name:";
    cin>>ws;
    getline(cin,s[i].name);
        
        cout<<"Enter percentage:";
        cin>>s[i].percentage;
}
    cout<<"\n---students records---\n";
    cout<<"Roll No.\tName\t\tPercentage\n";

    for (int i=0;i<n;i++)
        {
            cout<<s[i].rollNo<<"\t\t"
                <<s[i].name<<"\t\t"
                <<s[i].percentage<<"%\n";
            
        }
    return 0;
}
