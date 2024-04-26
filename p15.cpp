#include<iostream>
#include<iomanip>
using namespace std;

//Base class
class product
{
protected:
    int id;
    string name;
    string manufacturer;
    float price;
public:

    product(int id,string name,string manufacturer,float price)
    {
        this->id=id;
        this->name=name;
        this->manufacturer=manufacturer;
        this->price=price;
    }

    virtual void putdata()=0;
};

//Derived from product
class smartwatch : public product
{
protected:
    float dial_size;

public:
    smartwatch(int id,string name,string manufacturer,float price,float dial_size):product(id,name,manufacturer,price)
    {
        this->dial_size=dial_size;

    }

    void putdata()
    {
        cout<<"--------------------------------------------------------------------------------------------------------";
        cout<<setw(4)<<left<<id<<" : "<<setw(15)<<left<<name<<" : "<<setw(10)<<left<<manufacturer<<" : "<<setw(5)<<left<<price<<" : "<<setw(3)<<left<<dial_size;
        cout<<"--------------------------------------------------------------------------------------------------------";
    }

};

//Derived from prodect
class bedsheet : public product
{
protected:
    float width,height;
public:
    bedsheet(int id,string name,string manufacturer,float price,float width,float height):product(id,name,manufacturer,price)
    {
        this->width=width;
        this->height=height;

    }

     void putdata()
    {
        cout<<"--------------------------------------------------------------------------------------------------------";
        cout<<setw(4)<<left<<id<<" : "<<setw(15)<<left<<name<<" : "<<setw(10)<<left<<manufacturer<<" : "<<setw(5)<<left<<price<<" : "<<setw(3)<<left<<width<<" : "<<height;
        cout<<"--------------------------------------------------------------------------------------------------------";
    }
};

int main()
{
    int mid,choice;
    string mname,mmanufacturer;
    float mprice,mdial_size,mwidth,mheight;
    cout<<"(1) smart watch "<<"(2)bedsheet :"<<endl;
    cin>>choice;

    cout<<"Enter id :";
    cin>>mid;

    cout<<"Enter name :";
    cin>>mname;

    cout<<"Enter manufacturer :";
    cin>>mmanufacturer;

    cout<<"Enter price :";
    cin>>mprice;

    cout<<"Enter dial size :";
       cin>>mdial_size;
       smartwatch s(mid,mname,mmanufacturer,mprice,mdial_size);
       //s.putdata();
   switch(choice)
   {
   case 1:
       cout<<"Enter dial size :";
       cin>>mdial_size;
       //smartwatch s(mid,mname,mmanufacturer,mprice,mdial_size);
       break;

   case 2:
        cout<<"Enter width :";
        cin>>mwidth;
        cout<<"Enter height :";
        cin>>mheight;
        //bedsheet b(mid,mname,mmanufacturer,mprice,mdial_size,mwidth,mheight);
        break;
   }

}
