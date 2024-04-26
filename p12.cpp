#include<iostream>
#include<iomanip>
using namespace std;

class result;
class student
{
    string id,name;
    int sem;
public:
    void getdata_stu()
    {
        cout<<"Enter Id :";
        cin>>id;

        cout<<"Enter Name :";
        cin>>name;

        cout<<"Enter Semester :";
        cin>>sem;
    }

    void putdata_stu()
    {
        cout<<left<<setw(15)<<"Student ID "<<":"<<id<<endl;
        cout<<left<<setw(15)<<"Student Name "<<":"<<name<<endl;
        cout<<left<<setw(15)<<"Student Semester "<<":"<<sem<<endl;

    }

    void getresult(result &);
    void putresult(result &);
};

class result
{
    string sub_name[3],th_grad[3],pr_grad[3];
    int th_cradit[3],pr_cradit[3],th_mark[3],pr_mark[3],th_point[3],pr_point[3];

    friend class student;

};

void student::getresult(result &r)
    {
        for(int i=0;i<3;i++)
        {
            cout<<"Enter subject "<<i+1<<" name :";
            cin>>r.sub_name[i];

            cout<<"Enter theory creadit of"<<i+1<<" subject :";
            cin>>r.th_cradit[i];

            cout<<"Enter practical creadit of"<<i+1<<" subject :";
            cin>>r.pr_cradit[i];

            cout<<"Enter theory marks of"<<i+1<<" subject :";
            cin>>r.th_mark[i];

            cout<<"Enter practical marks of"<<i+1<<" subject :";
            cin>>r.pr_mark[i];

            if(r.th_mark[i]>=80)
            {
                r.th_grad[i]="AA";
                r.th_point[i]=10;
            }
            if(r.th_mark[i]>=73 && r.th_mark[i]<80)
            {
                r.th_grad[i]="AB";
                r.th_point[i]=9;
            }
            if(r.th_mark[i]>=66 && r.th_mark[i]<73)
            {
                r.th_grad[i]="BB";
                r.th_point[i]=8;
            }
            if(r.th_mark[i]>=60 && r.th_mark[i]<66)
            {
               r.th_grad[i]="BC";
                r.th_point[i]=7;
            }
            if(r.th_mark[i]>=55 && r.th_mark[i]<60)
            {
                r.th_grad[i]="CC";
                r.th_point[i]=6;
            }
            if(r.th_mark[i]>=50 && r.th_mark[i]<55)
            {
                r.th_grad[i]="CD";
                r.th_point[i]=5;
            }
            if(r.th_mark[i]>=45 && r.th_mark[i]<50)
            {
                r.th_grad[i]="DD";
                r.th_point[i]=4;
            }
            if(r.th_mark[i]<45)
            {
                r.th_grad[i]="FF";
                r.th_point[i]=0;
            }


            if(r.pr_mark[i]>=80)
            {
                r.pr_grad[i]="AA";
                r.pr_point[i]=10;
            }
            if(r.pr_mark[i]>=73 && r.pr_mark[i]<80)
            {
                r.pr_grad[i]="AB";
                r.pr_point[i]=9;
            }
            if(r.pr_mark[i]>=66 && r.pr_mark[i]<73)
            {
                r.pr_grad[i]="BB";
                r.pr_point[i]=8;
            }
            if(r.pr_mark[i]>=60 && r.pr_mark[i]<66)
            {
                r.pr_grad[i]="BC";
                r.pr_point[i]=7;
            }
            if(r.pr_mark[i]>=55 && r.pr_mark[i]<60)
            {
                 r.pr_grad[i]="CC";
                 r.pr_point[i]=6;
            }
            if(r.pr_mark[i]>=50 && r.pr_mark[i]<55)
            {
                r.pr_grad[i]="CD";
                r.pr_point[i]=5;
            }
            if(r.pr_mark[i]>=45 && r.pr_mark[i]<50)
            {
                r.pr_grad[i]="DD";
                r.pr_point[i]=4;
            }
            if(r.pr_mark[i]<45)
            {
                r.pr_grad[i]="FF";
                r.pr_point[i]=0;
            }

        }

    }


void student::putresult(result &r)
{
    int i,sum=0,cradit=0;
    float sgpa;

    for(i=0;i<3;i++)
    {
        sum=sum+(r.th_point[i]*r.th_cradit[i])+(r.pr_point[i]*r.pr_cradit[i]);
        cradit=cradit+r.pr_cradit[i]+r.th_cradit[i];
    }

    sgpa=sum/cradit;

    cout<<endl<<"-----------------------------------------------------"<<endl;
    putdata_stu();

    cout<<right<<setw(36)<<"Theory";
    cout<<right<<setw(11)<<"Practical"<<endl;

    for(i=0;i<3;i++)
    {
        cout<<left<<setw(30)<<r.sub_name[i];
        cout<<right<<setw(6)<<r.th_grad[i];
        cout<<right<<setw(11)<<r.pr_grad[i]<<endl;
    }

    cout<<endl<<left<<setw(15)<<"Sgpa"<<":"<<sgpa;
}

int main()
{
    result r;
    student s;
    s.getdata_stu();
    s.getresult(r);
    s.putresult(r);
}


