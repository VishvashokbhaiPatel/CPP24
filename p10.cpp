#include<iostream>
using namespace std;
class emp
{
    int year,month;
public:
    emp()
    {

    }
    emp(float f)
    {
        year =f;
        month = (f - year)*12;
    }
    void put()
    {
       cout<< "Employee experience is "<<year<< " Year ,"<<month<< " Month."<<endl;
    }
};

int main()
{
    emp o;
    float n;
    cout<< "Enter the Employee experience:";
    cin>>n;
    o=n;
    o.put();
}
