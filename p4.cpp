#include<iostream>
#include<iomanip>
using namespace std;
float area(int);
float area(int,int);
float area(int,int,int);

int main()
{
    int n,rect_h,rect_w,cub_h,cub_w,cub_d,r;
    float a;
    cout<<"(1) circle  (2)Rectangle  (3)Cuboid "<<endl<<"Chose option for find area :";
    cin>>n;

    switch(n)
    {
        //Checking area for circle.
    case 1:
        cout<<"Enter radius : ";
        cin>>r;
        a= area(r);
        cout<<"Area of circle = "<<a<<endl;
        break;

    case 2:
        cout<<"Enter hight of rectangle :";
        cin>>rect_h;
        cout<<"Enter width of rectangle :";
        cin>>rect_w;
        a=area(rect_h,rect_w);
        cout<<"Area of rectangle :"<<a<<endl;
        break;

    case 3:
        cout<<"Enter hight of a cuboid :";
        cin>>cub_h;
        cout<<"Enter width of cuboid :";
        cin>>cub_w;
        cout<<"Enter depth of cuboid :";
        cin>>cub_d;
        a=area(cub_h,cub_w,cub_d);
        cout<<"Area of cuboid :"<<a<<endl;
        break;

    }
}

float area(int r)
{
    return (3.14*r*r);
}

float area(int h,int w)
{
    return (h*w);
}

float area(int h,int w,int d)
{
    return (2*(h*w+w*d+d*h));
}




