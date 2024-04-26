#include<iostream>
#include<iomanip>
using namespace std;

class library
{
    long id;
    string title;
public:
    getdata()
    {
        cout<<"Enter ID :";
        cin>>id;
        cout<<"Enter Title :";
        cin>>title;
    }

    putdata()
    {
        cout<<setw(7)<<left<<id;
        cout<<setw(30)<<left<<title;
    }
};

class e_lit:public virtual library
{
    string doi;
public:
    getdata()
    {
        cout<<"Enter DOI :";
        cin>>doi;
    }

    putdata()
    {
        cout<<doi;
    }
};

class hb_lit: virtual public library
{
    string no_of_copies;
public:
    getdata()
    {
        cout<<"Enter No.of copies ;";
        cin>>no_of_copies;
    }

    putdata()
    {
        cout<<no_of_copies;
    }
};

class book:public e_lit,public hb_lit
{
    int isbn;
    string type;
public:
    getdata()
    {
        cout<<"(E)copy or (H)ardcopy :";
        cin>>type;
        library::getdata();
        if(type=="H")
            hb_lit::getdata();
        else
            e_lit::getdata();
        cout<<"Enter ISBN :";
        cin>>isbn;
    }


     putdata()
    {
        library::putdata();
        cout<<setw(7)<<left<<isbn;
        if(type=="H")
            hb_lit::putdata();
        else
            e_lit::putdata();
    }
};

class magazine:public e_lit,public hb_lit
{
    int issn;
    string type;
public:
    getdata()
    {
        cout<<"(E)copy or (H)ardcopy :";
        cin>>type;
        library::getdata();
        if(type=="H")
            hb_lit::getdata();
        else
            e_lit::getdata();
        cout<<"Enter ISSN :";
        cin>>issn;
    }

    putdata()
    {
        library::putdata();
        cout<<setw(7)<<left<<issn;
        if(type=="H")
            hb_lit::putdata();
        else
            e_lit::putdata();
    }
};

int main()
{
    book b[100];
    magazine m[100];
    int btop=0,mtop=0,n;
    string c;
   B:
    cout<<"Enter 1 : Add book data"<<endl<<"Enter 2 : Add magazine data"<<endl<<"Enter 3 : List of all books"<<endl<<"Enter 4 : List of all magazine"<<endl;
    cin>>n;
    switch(n)
    {
    case 1:
        b[btop].getdata();
        btop++;
        break;

    case 2:
        m[mtop].getdata();
        mtop++;
        break;

    case 3:
        for(int i=0;i<btop;i++)
        {
            b[i].putdata();
        }
        break;

    case 4:
        for(int i=0;i<mtop;i++)
        {
            m[i].putdata();
        }
        break;
    }

    cout<<endl<<"Press M for manu :";
    cin>>c;

    if(c=="M")
        goto B;


}
