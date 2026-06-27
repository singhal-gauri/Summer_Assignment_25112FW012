#include<iostream>
using namespace std;

struct student{
    int rollno;
    string name;
    int marks[5];
    int total;
    float percentage;
    char grade;
};

int main(){
    student s[100];
    int totalstudent;
    cout<<"Enter total number of students: ";
    cin>>totalstudent;

    for(int i=0;i<totalstudent;i++){

        cout<<"Enter detail of student "<<i+1<<endl;
        cout<<"Rollno: ";
        cin>>s[i].rollno;

        cout<<"Name: ";
        cin>>s[i].name;

        s[i].total=0;
        cout<<"Enter marks of 5 subjects...."<<endl;
        for(int j=0;j<5;j++){
            cout<<"Subject "<<j+1<<" : ";
            cin>>s[i].marks[j];
            s[i].total+=s[i].marks[j];
        }

        s[i].percentage=s[i].total/5.0;

        if(s[i].percentage>90)
            s[i].grade='A';
        else if(s[i].percentage >= 75)
            s[i].grade = 'B';
        else if(s[i].percentage >= 60)
            s[i].grade = 'C';
        else if(s[i].percentage >= 40)
            s[i].grade = 'D';
        else
            s[i].grade = 'F';
    }

    cout<<"=========MARKSHEET==========="<<endl;
    for(int i=0;i<totalstudent;i++){
        cout<<"Roll no: "<<s[i].rollno<<endl;
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Marks: ";
        for(int j=0;j<5;j++){
            cout<<s[i].marks[j]<<" ";
        }
        cout<<endl;
        cout<<"Total marks: "<<s[i].total<<endl;
        cout<<"Percentage: "<<s[i].percentage<<" % "<<endl;
        cout<<"Grade: "<<s[i].grade<<endl;
        cout<<endl;
    }

    return 0;


}