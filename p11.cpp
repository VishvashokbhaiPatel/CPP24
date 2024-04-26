#include<iostream>
#include<iomanip>
using namespace std;
class emp
{
    int year,month;
public:
    operator float()
    {
        return (year + (float(month)/12));
    }
    void get()
    {
        cout<< "Enter the Year:";
        cin>>year;
        cout<< "Enter the month:";
        cin>>month;
    }
};
int main()
{
    emp o;
    o.get();

    float n;
    n = o;
    cout<<n;
    return 0;
}
