#include<iostream>
using namespace std;

class emp
{
private:

    char name[20];
    char quf[30];
    float exp;
    long long con_no;
    static float average_exp;
    static int cnt;
    int id;

protected:

    void getdata()
    {
        cnt++;
        cout<<"Enter employee id :";
        cin>>id;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter qualifucation :";
        cin>>quf;
        cout<<"Enter expriance :";
        cin>>exp;
        cout<<"Enter contact number :";
        cin>>con_no;

        average_exp +=exp;
    }



    void putdata()
    {
        cout<<"\n...................................";
        cout<<"\nEmployee Name : "<<name;
        cout<<"\nQualifacation : "<<quf;
        cout<<"\nExperience  : "<<exp;
        cout<<"\ncontact number : "<<con_no<<endl;
    }



    void average_exprience()
    {
        cout<<"Average exprience : "<<average_exp;

    }


    int searchemp(int id_no)
    {
        if(id_no==id)
            return 1;
        else
            return 0;
    }



public:
    static void avg_exp()
    {
        cout<<"Average exprience :"<<average_exp/cnt;
    }
};



class teaching_emp : public emp
{
    string designation,specialzation,pay_scale;

public:



    void getdata()
    {
        emp::getdata();
        cout<<"Enter Designation :";
        cin>>designation;

        cout<<"Enter Specialzation :";
        cin>>specialzation;

        cout<<"Enter Pay scale :";
        cin>>pay_scale;
    }



    void putdata()
    {
        emp::putdata();
        cout<<"Designation :"<<designation<<endl;

        cout<<"Specialzation :"<<specialzation<<endl;

        cout<<"Pay scale :"<<pay_scale<<endl;
    }
    int searchemp(int n_t)
    {
        return emp::searchemp(n_t);
    }
} ;


class non_teaching_emp : public emp
{
    int salary;
public:

     int searchemp(int n_nt)
    {
        return emp::searchemp(n_nt);
    }


    void getdata()
    {
        emp::getdata();
        cout<<"Enter salary :";
        cin>>salary;
    }


    void putdata()
    {
        emp::putdata();
        cout<<"salary :"<<salary<<endl;
    }
};

float emp::average_exp=0;
int emp::cnt=0;


int main()
{
    int n_t,id_no,tag=0,i,n_nt;
    char c,a;

    cout<<"\nEnter number of teaching employe :";
    cin>>n_t;
    teaching_emp e[n_t];

     for(int i=0; i<n_t; i++)
    {
        cout<<"\nEnter "<<i+1<<" teaching employe details \n";
        e[i].getdata();
    }


    cout<<"\nEnter number of non teaching employe :";
    cin>>n_nt;
    non_teaching_emp e1[n_nt];

    for(int i=0; i<n_nt; i++)
    {
        cout<<"\nEnter "<<i+1<<" non teaching employe details \n";
        e1[i].getdata();
    }

    cout<<"DETAIL OF EMPLOYEE :--"<<endl;


    do
    {
        cout<<"Enter id no :";
        cin>>id_no;

        for(int i=0; i<n_t; i++)
        {
            tag=e[i].searchemp(id_no);
            if(tag==1)
                e[i].putdata();
        }

        if(tag==0)
        {
                for(int i=0; i<n_nt; i++)
            {
                tag=e1[i].searchemp(id_no);
                if(tag==1)
                    e1[i].putdata();
            }
        }

        if(tag==0)
        {
            cout<<"Employee is not exist."<<endl;

        }

        cout<<"Press (y) for check more employee details and (n) for exit :";
        cin>>a;

        if(a=='n'||a=='N')
            break;


    }
    while(a=='y'||a=='Y');
    emp o;
    o.avg_exp();

    return 0;
}
