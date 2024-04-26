#include<iostream>
using namespace std;

class cm;
class mm
{
private:
    float mm_data;
public:
    mm()
    {
        mm_data = 0;
    }
    float mm_getdata()
    {
        cout << "Enter Measurement in mm : ";
        cin >> mm_data;
    }
    float mm_putdata()
    {
        cout << "Measurement in cm : ";
        cout << mm_data;
    }
    float send_mm_data()
    {
        return mm_data;
    }
    mm(cm &y);
};

class cm
{
private:
float cm_data;
public:
    cm()
    {
        cm_data = 0;
    }
    float cm_getdata()
    {
        cout << "Enter Measurement in cm : ";
        cin >> cm_data;
    }
    float cm_putdata()
    {
        cout << "Measurement in cm : ";
        cout << cm_data;
    }
    float send_cm_data()
    {
        return cm_data;
    }
    cm(mm &x);
};

mm::mm(cm &y)
    {
        mm_data = (y.send_cm_data())*10;
    }

cm::cm(mm &x)
    {
        cm_data = (x.send_mm_data())/10;
    }

int main()
{
    class mm M;
    class cm C;
    int n;
    cout << "Enter 1 : mm to cm converter" << endl;
    cout << "Enter 2 : cm to mm converter" << endl;
    cin >> n;
    switch(n)
    {
    case 1:
        M.mm_getdata();
        C = M;
        C.cm_putdata();
        break;
    case 2:
        C.cm_getdata();
        M = C;
        M.mm_putdata();
        break;
    }
}
